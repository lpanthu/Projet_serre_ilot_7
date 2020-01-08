#include "VuePrincipale.h"

VuePrincipale::VuePrincipale(unSuperviseur) {
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