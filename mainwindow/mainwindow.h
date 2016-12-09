#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QAction>
#include <QScrollArea>

#include <QMenuBar>
#include <QMenu>

#include <QFileDialog>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QLabel *imageLabel;
    QScrollArea *scrollArea;

    QFileDialog *dialog;

public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void openImage();

};

#endif // MAINWINDOW_H
