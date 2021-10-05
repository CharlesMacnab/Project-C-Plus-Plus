//
// Created by charl on 16/01/2020.
//

#include "Adiministratif.h"

Adiministratif::Adiministratif(string s, string n, string p, int e, int i, int annee_e, string site, int jours) : service(s), Permanent(annee_e, site, jours, n, p, e, i){

}

void Adiministratif::afficher() {
    cout << "* [id=" << id << "] Nom et prénom : " << nom << " " << prenom << ", Salaire : " << echelon_salaire << ", Statut : Administratif, Année d'embauche :" << annee_embauche << ", Site :" << site << ", Nombre de jours de travail : " << nb_jour_travail << ", Service :  "<< service <<  endl;
}


