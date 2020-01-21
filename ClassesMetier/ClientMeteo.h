#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H

#include "BulletinMeteo.h"

class ClientMeteo {
public:
    ClientMeteo();
    virtual ~ClientMeteo();
    void traiterBulletinMeteo(BulletinMeteo bulletin);
    void declencherAlerteVent();
    void declencherFinAlerteVent();
    BulletinMeteo* getBulletinMeteo();
private:
    BulletinMeteo* dernierBilletinMeteo;
};

#endif /* CLIENTMETEO_H */

