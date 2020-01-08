#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    VuePrincipale *maVuePrincipale = new VuePrincipale();
    monTimer -> show();
    return app.exec();
}
