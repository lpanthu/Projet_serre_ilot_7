
#include "Superviseur.h"

Superviseur::Superviseur() {
    ClientMeteo* leClientMeteo = new ClientMeteo();
    Serre* serre = new Serre();
}

Superviseur::~Superviseur() {
    delete leClientMeteo;
}

ClientMeteo* Superviseur::getLeClientMeteo() {
    return leClientMeteo;
}

void Superviseur::setVuePrincipale(VuePrincipale uneVuePrincipale) {
    laVue = uneVuePrincipale;
}