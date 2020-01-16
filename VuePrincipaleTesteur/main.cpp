#include <QApplication>
#include <QWidget>

#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    //Superviseur *leSuperviseur = new Superviseur();
    //VuePrincipale *maVuePrincipale = new VuePrincipale(leSuperviseur);
    VuePrincipale *maVuePrincipale = new VuePrincipale();
    maVuePrincipale->show();
    maVuePrincipale->mettreAJour();
    return app.exec();
    delete maVuePrincipale;
}