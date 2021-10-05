//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_ENSEIGNANT_CHERCHEUR_H
#define GROSS_ENSEIGNANT_CHERCHEUR_H


#include "Intervenant.h"
#include <iostream>
#include <string>
using namespace std;

class Enseignant_Chercheur : public Intervenant{
private:
    int Hindex;
public:
    void afficher();
    Enseignant_Chercheur(int H,int nb_ensei, int nb_heure_admin ,int annee_e, string site, int jours, string n, string p, int e, int i);
};


#endif //GROSS_ENSEIGNANT_CHERCHEUR_H
