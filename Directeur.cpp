//
// Created by charl on 16/01/2020.
//

#include "Directeur.h"


Directeur::Directeur(int annee_nomination, string n, string p, int e, int i) : annee_nomination(annee_nomination), Salarie(n,p,e,i) {

}

void Directeur::afficher() {
    cout << "* [id=" << id << "] Nom et prénom : " << nom << " " << prenom << ", Salaire : " << echelon_salaire << ", Statut : Directeur, Année de nomination :" << annee_nomination << endl;
}
