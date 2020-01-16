/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infoclimat.cpp
 * Author: snir2g2
 * 
 * Created on 16 janvier 2020, 14:37
 */
#include "ui_VueSerre.h"
#include "VueSerre.h"
#include "infoclimat.h"
#include <iostream>

using namespace std;

InfosClimat::InfosClimat() {
}

//InfosClimat::InfosClimat(const InfosClimat& orig) {


InfosClimat::~InfosClimat() {
}

int InfosClimat::getTemperature() {
    return this-> temperature;
}

int InfosClimat::getHygrometrie(){
    return this-> hygrometrie;
}

int InfosClimat::getLuminosite(){
    return this->luminosite;
}