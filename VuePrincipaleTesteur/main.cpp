#include <QApplication>
#include <QWidget>
#include "VuePrincipale.h"
#include "Superviseur.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Superviseur *leSuperviseur = new Superviseur();
    VuePrincipale *maVuePrincipale = new VuePrincipale(leSuperviseur);
    maVuePrincipale -> show();
    return app.exec();
    delete maVuePrincipale;
}