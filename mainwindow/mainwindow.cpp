#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QAction *actionOpenFile = new QAction("Открыть изображение...", this);
    connect(actionOpenFile, SIGNAL(triggered(bool)),SLOT(openImage()));

    QAction *actionExit = new QAction("Выход", this);
    connect(actionExit, SIGNAL(triggered(bool)), SLOT(close()));

    QMenu *menuFile = new QMenu("Файл");
    menuFile->addAction(actionOpenFile);
    menuFile->addSeparator();
    menuFile->addAction(actionExit);
    menuBar()->addMenu(menuFile);

    imageLabel = new QLabel();
    scrollArea = new QScrollArea();
    setCentralWidget(scrollArea);
}

MainWindow::~MainWindow()
{
}

void MainWindow::openImage()
{
    QString imageFileName =
            QFileDialog::getOpenFileName(this, "Выберите файл изображения");
    if (imageFileName.isNull())
        return;

    imageLabel->setPixmap(imageFileName);
    scrollArea->setWidget(imageLabel);
}
