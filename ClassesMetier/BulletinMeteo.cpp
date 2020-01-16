/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.cpp
 * Author: snir2g2
 * 
 * Created on 16 janvier 2020, 13:44
 */

#include "BulletinMeteo.h"

BulletinMeteo::BulletinMeteo() {
}

BulletinMeteo::BulletinMeteo(const BulletinMeteo& orig) {
}

BulletinMeteo::~BulletinMeteo() {
}

void BulletinMeteo::setTemperature(int temperature){
    this->temperature = temperature;
    notifier();
}

void BulletinMeteo::setVitesseVent(int vitesse){
    vitesseVent = vitesse;
    notifier();
}

void BulletinMeteo::setAlarmeVent(bool alerte){
    alerteVent = alerte;
    notifier();
}

int BulletinMeteo::getTemperature(){
    return this->temperature;
}

int BulletinMeteo::getVitesseVent(){
    return this->vitesseVent;
}



