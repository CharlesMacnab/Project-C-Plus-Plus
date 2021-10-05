//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_ECOLE_H
#define GROSS_ECOLE_H

#include <string>
#include <iostream>
#include "Salarie.h"
#include <vector>
using namespace std;



class Ecole {
private:
    string nom_Ecole;
    int date_creation;

    double nb_salarie;
    string ancienne;
public:
    Ecole(string nomEcole, int dateCreation);
    double get_nb_salarie();
    int get_date();
    string get_name();
    void afficher();
};



#endif //GROSS_ECOLE_H
