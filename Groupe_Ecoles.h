//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_GROUPE_ECOLES_H
#define GROSS_GROUPE_ECOLES_H

#include "Ecole.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Groupe_Ecoles {
private:
    string name;
    double nb_total_ecole;
    vector<Ecole*> ecoles;
    vector<Salarie*> salarie;
    string ancienne;
    double total_salarie = 5;

public:
    void ajouter(Ecole* e);
    void afficher();
    void supprimer(Salarie* s);
    void ajouter (Salarie* s);
    Groupe_Ecoles(string n, double t);
    void changer_site_affectation(Salarie* salaries);
    string ancienne1(Ecole* e);


};


#endif //GROSS_GROUPE_ECOLES_H
