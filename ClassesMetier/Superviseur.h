#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H

#include "../VuePrincipaleTesteur/VuePrincipale.h"
#include "ClientMeteo.h"
#include "Serre.h"

class Superviseur {
public:
    Superviseur();
    Superviseur(const Superviseur& orig);
    virtual ~Superviseur();
    ClientMeteo* getLeClientMeteo();
    void setVuePrincipale(VuePrincipale uneVuePrincipale);
private:
    VuePrincipale* laVue;
    ClientMeteo* leClientMeteo;
    Serre* serre;
};

#endif /* SUPERVISEUR_H */