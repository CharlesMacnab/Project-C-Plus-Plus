//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_DIRECTEUR_H
#define GROSS_DIRECTEUR_H


#include "Salarie.h"


class Directeur : public Salarie{

private:
    int annee_nomination;

public:
    Directeur(int annee_nomination, string n, string p, int e, int i);
    void afficher();
};


#endif //GROSS_DIRECTEUR_H
