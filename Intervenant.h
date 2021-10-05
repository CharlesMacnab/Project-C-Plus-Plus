//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_INTERVENANT_H
#define GROSS_INTERVENANT_H


#include "Permanent.h"

class Intervenant : public Permanent{
protected:
    int nb_heures_enseignement;
    int nb_heures_admin;
public:
    Intervenant(int nb_ensei, int nb_heure, int annee_e, string site, int jours, string n, string p, int e, int i);
};


#endif //GROSS_INTERVENANT_H
