#include "VuePrincipale.h"
/*
VuePrincipale::VuePrincipale(Superviseur unSuperviseur) {
    widget.setupUi(this);
}
*/

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
}

VuePrincipale::~VuePrincipale() {
}

VuePrincipale::VueMeteo* getLaVueMeteo() {
}

void VuePrincipale::mettreAJour() {
    laVueMeteo->mettreAJour();
    laVueSerre->mettreAJour();
}
