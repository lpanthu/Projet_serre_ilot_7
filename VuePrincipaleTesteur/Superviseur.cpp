Superviseur::Superviseur() {
    ClientMeteo* leClientMeteo = new ClientMeteo();
    Serre* serre = new Serre();
}

Superviseur::~Superviseur() {
    delete leClientMeteo;
}

ClientMeteo* Superviseur::getLeClientMeteo() {
}

void Superviseur::setVuePrincipale(VuePrincipale uneViePrincipale) {
}