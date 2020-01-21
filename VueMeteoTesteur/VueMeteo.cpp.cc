/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 15:09
 */

#include "VueMeteo.h"


VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}

VueMeteo::VueMeteo(BulletinMeteo* unBulletinMeteo) {
    widget.setupUi(this);
    this->dernierBulletinMeteo = unBulletinMeteo;
    this->dernierBulletinMeteo->addObservateur(this);
}

void VueMeteo::mettreAJour(){
    widget.vitesseVent->setText(QString::number(BulletinMeteo->getVitesseVent()));
    widget.temperature->setText(QString::number(BulletinMeteo->getTemperature()));
}
