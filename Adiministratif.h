//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_ADIMINISTRATIF_H
#define GROSS_ADIMINISTRATIF_H


#include "Permanent.h"

class Adiministratif : public Permanent{
private:
    string service;
public:
    Adiministratif(string s, string n, string p , int e, int i, int annee_e, string site, int jours);
    void afficher();
};


#endif //GROSS_ADIMINISTRATIF_H
