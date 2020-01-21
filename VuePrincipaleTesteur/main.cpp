#include <QApplication>
#include <QWidget>

#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    //Superviseur *leSuperviseur = new Superviseur();
    //VuePrincipale *maVuePrincipale = new VuePrincipale(leSuperviseur);
    VuePrincipale *laVuePrincipale = new VuePrincipale();
    laVuePrincipale->show();
    laVuePrincipale->mettreAJour();
    return app.exec();
    delete laVuePrincipale;
}