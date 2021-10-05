//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_PERMANENT_H
#define GROSS_PERMANENT_H


#include "Salarie.h"

class Permanent : public Salarie{
protected:
    int annee_embauche;
    string site;
    int nb_jour_travail;
public:
    Permanent(int annee_e, string site, int jours, string n, string p, int e, int i);
};


#endif //GROSS_PERMANENT_H
