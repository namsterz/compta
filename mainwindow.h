#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets>
#include <QMainWindow>
#include "GestionClient.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void creatAction();

    ~MainWindow();

private:
    QTabWidget *Options;
    GestionClient *GesClient;
    QStatusBar *etat;
    QProgressBar* Progetat;
    QToolBar* OuvertureSession;
    QAction* connexion;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
