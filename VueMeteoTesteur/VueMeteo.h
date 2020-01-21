/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 15:09
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"
#include "../ClassesMetier/Observateur.h"
#include "../ClassesMetier/BulletinMeteo.h"

class VueMeteo : public Observateur, QWidget {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
    void mettreAJour();
    VueMeteo(BulletinMeteo* unBulletinMeteo);
private:
    Ui::VueMeteo widget;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* _VUEMETEO_H */
