#include <QApplication>
#include <QWidget>
#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    VuePrincipale *maVuePrincipale = new VuePrincipale();
    maVuePrincipale -> show();
    return app.exec();
}