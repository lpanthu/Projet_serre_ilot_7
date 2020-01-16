/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g2
 *
 * Created on 8 janvier 2020, 17:44
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "infoclimat.h"
#include "../ClassesMetier/Observateur.h"

class VueSerre : public Observateur, public QWidget {
    Q_OBJECT
public:
    VueSerre();
    virtual ~VueSerre();
    void mettreAJour();
private:
    Ui::VueSerre widget;
    InfosClimat* infoclimat;  
};

#endif /* _VUESERRE_H */
