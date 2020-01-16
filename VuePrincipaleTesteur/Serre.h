#ifndef SERRE_H
#define SERRE_H

#include "InfosClimat.h"

class Serre {
public:
    Serre();
    Serre(const Serre& orig);
    virtual ~Serre();
    void executerCommande(Commande commande);
private:
    InfosClimat* infosClimat;
};

#endif /* SERRE_H */

