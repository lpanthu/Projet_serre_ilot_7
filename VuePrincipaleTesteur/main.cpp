#include <QApplication>
#include <QWidget>

#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Superviseur *leSuperviseur = new Superviseur();
    VuePrincipale *laVuePrincipale = new VuePrincipale(leSuperviseur);
    laVuePrincipale->show();
    laVuePrincipale->mettreAJour();
    return app.exec();
    delete laVuePrincipale;
}