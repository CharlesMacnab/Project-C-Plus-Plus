//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_ENSEIGNANT_H
#define GROSS_ENSEIGNANT_H


#include "Intervenant.h"
#include <iostream>
#include <string>
using namespace std;

class Enseignant : public Intervenant{
private:
    bool agrege;
public:
    Enseignant(bool agrege, int nb_ensei, int nb_heure, int annee_e, string site, int jours, string n, string p, int e, int i);
    void afficher();
};


#endif //GROSS_ENSEIGNANT_H
