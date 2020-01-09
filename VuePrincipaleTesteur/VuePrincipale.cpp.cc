#include "VuePrincipale.h"

/*
VuePrincipale::VuePrincipale(Superviseur unSuperviseur) {
    widget.setupUi(this);
    VueMeteo *laVueMeteo = new VueMeteo(unBulletinMeteo);
    widget.meteo->addWidget(laVueMeteo);
    //VueSerre *laVueSerre = new VueMeteo(nom, uneInfoClimat);
    //widget.serre->addWidget(laVueSerre);
}
*/

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    //VueMeteo *laVueMeteo = new VueMeteo(unBulletinMeteo);
    VueMeteo *laVueMeteo = new VueMeteo();
}

VuePrincipale::~VuePrincipale() {
}
/*
VueMeteo* VuePrincipale::getLaVueMeteo() {
}
*/

void VuePrincipale::mettreAJour() {
    widget.meteo->addWidget(laVueMeteo);
    laVueMeteo->mettreAJour();
    //laVueSerre->mettreAJour();
}