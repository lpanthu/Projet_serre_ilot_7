/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g2
 *
 * Created on 16 janvier 2020, 13:44
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H

class BulletinMeteo : public Observable {
public:
    BulletinMeteo();
    BulletinMeteo(const BulletinMeteo& orig);
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    void setTemperature(int temperature);
    void setVitesseVent(int vitesse);
    void setAlarmeVent(bool alerte);
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

