/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g2
 *
 * Created on 8 janvier 2020, 17:44
 */
#include "ui_VueSerre.h"
#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour(){
    widget.temperature->setText("20");
    widget.hygrometrie->setText("5");
    widget.luminosite->setText("64");
    widget.positionOuvrants->setText("23");
}