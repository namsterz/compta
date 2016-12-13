#include "GestionClient.h"

GestionClient::GestionClient(QMainWindow *parent) : QWidget(parent)
{
MiseenPage = new QGridLayout;
DetailFacture = new QWidget;


////////////////////////////////////
// Mise en Page Facture //
// //////////////////////////
QGridLayout *LayoutFacture=new QGridLayout;
// Numero Facture
QLabel *numero=new QLabel;
numero->setText("# Facture");
QSpinBox *numeroF= new QSpinBox;
LayoutFacture->addWidget(numero,0,0);
LayoutFacture->addWidget(numeroF,1,0);


// Date Facture
QLabel *Date=new QLabel;
Date->setText("Date Facturation");
QDateEdit *DateF= new QDateEdit;
LayoutFacture->addWidget(Date,0,1);
LayoutFacture->addWidget(DateF,1,1);

// Type de  Facture
QLabel *type=new QLabel;
type->setText("Type de Facture");
QComboBox *typeF= new QComboBox;
LayoutFacture->addWidget(type,0,2);
LayoutFacture->addWidget(typeF,1,2);


// Ouverture Caisse
QLabel *ouverture=new QLabel;
ouverture->setText("Ouverture Caisse");
QTimeEdit *ouvertureC= new QTimeEdit;
LayoutFacture->addWidget(ouverture,0,3);
LayoutFacture->addWidget(ouvertureC,1,3);

// Fermeture Caisse
QLabel *fermeture=new QLabel;
fermeture->setText("fermeture Caisse");
QTimeEdit *fermetureC= new QTimeEdit;
LayoutFacture->addWidget(fermeture,0,4);
LayoutFacture->addWidget(fermetureC,1,4);
MiseenPage->addLayout(LayoutFacture,0,0,1,0);
//////////////////////////////////////////////

///////////////////////////////////////////////////
// Mise EN Page Client
///////////////////////////////////////////////////
QLineEdit *nom=new QLineEdit;
QLineEdit*prenom=new QLineEdit;
QDateEdit *dateNaissance= new QDateEdit;
QComboBox *Service=new QComboBox;
QComboBox *Localisation=new QComboBox;
QLineEdit *NumeroTel=new QLineEdit;
QLineEdit *Adresse =new QLineEdit;
QFormLayout *detailClient=new QFormLayout;
detailClient->addRow("Nom:",nom);
detailClient->addRow("Prenom:",prenom);
detailClient->addRow("Date de Naissance",dateNaissance);
detailClient->addRow("Service Medical:",Service);
detailClient->addRow("Localisation:",Localisation);
detailClient->addRow("Numero Tel",NumeroTel);
detailClient->addRow("Adresse:",Adresse);
MiseenPage->addLayout(detailClient,1,0);
/////////////////////////////////////////////////////////////
///
///
///

//// Mise en Page Suivie ///////////////////
///
///
    QTableView *vueFac = new QTableView;
    QTableView *SuivieClient = new QTableView;
QTabWidget *Details=new QTabWidget;
Details->addTab(vueFac,"Details Facturation");
Details->addTab(SuivieClient,"Suivie Client");
MiseenPage->addWidget(Details,1,1);


/////////////////////////////////


/// Mise en Page Nombre Caisse //
/// /
QLabel *textCaisse= new QLabel("Etat Caisse");
QLabel *textMontant=new QLabel("Montant Total");
QLCDNumber *EtatCaisse= new QLCDNumber;
QLCDNumber *MontantAPaye= new QLCDNumber;
MiseenPage->addWidget(textMontant);
MiseenPage->addWidget(textCaisse);
MiseenPage->addWidget(EtatCaisse);
MiseenPage->addWidget(MontantAPaye);
this->setLayout(MiseenPage);



}
GestionClient::~GestionClient()
{

}
