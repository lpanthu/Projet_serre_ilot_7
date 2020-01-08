#include <QApplication>
#include <QWidget>
#include "VuePrincipale.h"
#include "Superviseur.h"
#include "VueMeteo.h"
#include "VueSerre.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Superviseur *leSuperviseur = new Superviseur();
    VuePrincipale *maVuePrincipale = new VuePrincipale(leSuperviseur);
    maVuePrincipale -> show();
    return app.exec();
    delete maVuePrincipale;
}