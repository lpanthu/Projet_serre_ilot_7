#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    //VuePrincipale(Superviseur* unSuperviseur);
    VuePrincipale();
    virtual ~VuePrincipale();
    //VueMeteo* getLaVueMeteo();
    void mettreAJour();
private:
    Ui::VuePrincipale widget;
    /*V
    VueSerre* laVueSerre;
    VueMeteo* laVueMeteo;
    Superviseur* leSuperviseur;
    */
};

#endif /* _VUEPRINCIPALE_H */