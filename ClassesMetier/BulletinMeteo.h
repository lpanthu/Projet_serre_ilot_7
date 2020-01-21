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

