//
// Created by charl on 16/01/2020.
//

#include "Enseignant.h"

Enseignant::Enseignant(bool agrege, int nb_ensei, int nb_heure, int annee_e, string site, int jours, string n, string p,
                       int e, int i) : agrege(agrege), Intervenant(nb_ensei, nb_heure, annee_e, site, jours, n, p, e, i){

}


void Enseignant :: afficher(){
    cout << "* [id=" << id << "] Nom et prénom : " << nom << " " << prenom << ", Salaire : " << echelon_salaire << ", Statut : Administratif, Année d'embauche :" << annee_embauche << ", Site :" << site << ", Nombre de jours de travail : " << nb_jour_travail << ", Nombre d'heures d'enseignement: "<< nb_heures_enseignement << ", Nombre d'heure d'administration: " << nb_heures_admin <<", Agrégation : " << agrege <<  endl;

}


