//
// Created by charl on 16/01/2020.
//

#include "Enseignant_Chercheur.h"

Enseignant_Chercheur::Enseignant_Chercheur(int H, int nb_ensei, int nb_heure_admin, int annee_e, string site, int jours,
                                           string n, string p, int e, int i): Hindex(H), Intervenant(nb_ensei, nb_heure_admin, annee_e, site, jours, n, p , e ,i) {

}

void Enseignant_Chercheur::afficher() {
    cout << "* [id=" << id << "] Nom et prénom : " << nom << " " << prenom << ", Salaire : " << echelon_salaire << ", Statut : Enseignant chercheur, Année d'embauche :" << annee_embauche << ", Site :" << site << ", Nombre de jours de travail : " << nb_jour_travail << ", Nombre d'heures d'enseignement: "<< nb_heures_enseignement << ", Nombre d'heure d'administration: " << nb_heures_admin << ", Hindex: "<< Hindex<< endl;
}

