
#include "VuePrincipale.h"

VuePrincipale::VuePrincipale(Superviseur unSuperviseur) {
    widget.setupUi(this);
    leSuperviseur = unSuperviseur;
    VueMeteo* laVueMeteo = new VueMeteo(leSuperviseur->getLeClientMeteo()->getBulletinMeteo());
    VueSerre* laVueSerre = new VueSerre(nom, uneInfoClimat);
    widget.meteo->addWidget(laVueMeteo);
    widget.serre->addWidget(laVueSerre);
}

VuePrincipale::~VuePrincipale() {
    delete laVueMeteo;
    delete laVueSerre;
}

VueMeteo* VuePrincipale::getLaVueMeteo() {
    return laVueMeteo;
}

void VuePrincipale::mettreAJour() {
    laVueMeteo->mettreAJour();
    laVueSerre->mettreAJour();
}