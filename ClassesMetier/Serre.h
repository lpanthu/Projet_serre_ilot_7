#ifndef SERRE_H
#define SERRE_H

#include "infoclimat.h"

class Serre {
public:
    Serre();
    Serre(const Serre& orig);
    virtual ~Serre();
    void executerCommande();
private:
    infoclimat* infosClimat;
};

#endif /* SERRE_H */

