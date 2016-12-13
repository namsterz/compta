#ifndef GestionClient_H
#define GestionClient_H
#include <QtWidgets>
#include <QWidget>

class GestionClient : public QWidget
{
    Q_OBJECT
public:
    explicit GestionClient(QMainWindow *parent = 0);
 ~GestionClient();
signals:
private :
 QGridLayout *MiseenPage;
 QWidget *DetailFacture;
public slots:
};

#endif // GestionClient_H
