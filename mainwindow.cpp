#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    OuvertureSession=new QToolBar("Ouverture Session");
  ui->setupUi(this);
  QFile File("C:/Users/Adem/Documents/PCCOMPT/darkorange.stylesheet");
  File.open(QFile::ReadOnly);
  QString StyleSheet=QLatin1String(File.readAll());

    //Création des Pages
   GesClient = new GestionClient(this);
    //Page1
    Options =new QTabWidget(this);
    Options->addTab(GesClient,"Gestion Client");


    this->setStyleSheet(StyleSheet);
    etat = new QStatusBar;
    this->setStatusBar(etat);
     Progetat = new QProgressBar(this);

  Progetat->setVisible(true);
  Progetat->setValue(50);
   etat->addPermanentWidget(Progetat);

  QToolBar *toolBar=addToolBar("Communication");
  creatAction();
  toolBar->addAction(connexion);
   this->setCentralWidget(Options);



}
void MainWindow::creatAction()
{
    connexion =new QAction(this);
    connexion->setIcon(QIcon("connexion.ico"));
}

MainWindow::~MainWindow()
{
    delete GesClient;
    delete ui;
}
