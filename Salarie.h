//
// Created by charl on 16/01/2020.
//

#ifndef GROSS_SALARIE_H
#define GROSS_SALARIE_H

#include <string>
#include <iostream>
using namespace std;

class Salarie {
protected:
    string nom;
    string prenom;
    int echelon_salaire;
    int id;
public:
    Salarie(string n, string p, int e, int i);
    virtual void afficher() = 0;
};


#endif //GROSS_SALARIE_H
