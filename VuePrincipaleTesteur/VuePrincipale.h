#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "Superviseur.h"
#include "../VueMeteoTesteur/VueMeteo.h"
#include "../VueSerreTesteur/VueSerre.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale(Superviseur unSuperviseur);
    virtual ~VuePrincipale();
    VueMeteo* getLaVueMeteo();
    void mettreAJour();
private:
    Ui::VuePrincipale widget;
    VueSerre* laVueSerre;
    VueMeteo* laVueMeteo;
    Superviseur* leSuperviseur;
};

#endif /* _VUEPRINCIPALE_H */