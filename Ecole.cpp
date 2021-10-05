//
// Created by charl on 16/01/2020.
//

#include "Ecole.h"

Ecole::Ecole(string nomEcole, int dateCreation) : nom_Ecole(nomEcole), date_creation(dateCreation) {

}

double Ecole::get_nb_salarie() {
    return nb_salarie;
}

int Ecole::get_date() {
    return date_creation;
}

void Ecole::afficher() {

}

string Ecole::get_name() {
    return nom_Ecole;
}

