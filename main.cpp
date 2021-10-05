#include <iostream>
#include "Groupe_Ecoles.h"
#include "Ecole.h"
#include "Directeur.h"
#include "Enseignant.h"
#include "Enseignant_Chercheur.h"
#include "Adiministratif.h"

void scenario1(){
    Groupe_Ecoles g1("Yncréa-Ouest", 4);
    Ecole* ec1 = new Ecole("ISEN-Brest",1990);
    Ecole* ec2 = new Ecole("ISEN-Nantes", 2015);
    Ecole* ec3 = new Ecole("ISEN-Caen", 2019);
    Ecole* ec4 = new Ecole("ISEN-Rennes", 2012);
    g1.ajouter(ec1);
    g1.ajouter(ec2);
    g1.ajouter(ec3);
    g1.ajouter(ec4);
    Directeur* d1 = new Directeur(2008, "Faudeil", "Marc", 6, 133);
    g1.ajouter(d1);
    Enseignant_Chercheur* e_c1 = new Enseignant_Chercheur(5, 300, 300, 2015, "Brest", 253, "Nom1", "Prénom1", 2, 121);
    g1.ajouter(e_c1);
    Enseignant* e1 = new Enseignant(true, 450, 300, 2014, "Brest", 253, "Nom2", "Prénom2", 1, 154);
    g1.ajouter(e1);
    Adiministratif* a1 = new Adiministratif("RH", "Nom3", "Prénom3", 1, 153, 2019, "Brest", 253);
    g1.ajouter(a1);
    Enseignant_Chercheur* e_c2 = new Enseignant_Chercheur(4, 300, 300, 2019, "Nantes", 253, "Nom4", "Prénom4", 1, 103);
    g1.ajouter(e_c2);
    g1.afficher();
}

void scenario2(){
    Groupe_Ecoles g1("Yncréa-Ouest", 4);
    Ecole* ec1 = new Ecole("ISEN-Brest",1990);
    Ecole* ec2 = new Ecole("ISEN-Nantes", 2015);
    Ecole* ec3 = new Ecole("ISEN-Caen", 2019);
    Ecole* ec4 = new Ecole("ISEN-Rennes", 2012);
    g1.ajouter(ec1);
    g1.ajouter(ec2);
    g1.ajouter(ec3);
    g1.ajouter(ec4);
    Directeur* d1 = new Directeur(2008, "Faudeil", "Marc", 6, 133);
    g1.ajouter(d1);
    Enseignant_Chercheur* e_c1 = new Enseignant_Chercheur(5, 300, 300, 2015, "Brest", 253, "Nom1", "Prénom1", 2, 121);
    g1.ajouter(e_c1);
    Enseignant* e1 = new Enseignant(true, 450, 300, 2014, "Brest", 253, "Nom2", "Prénom2", 1, 154);
    g1.ajouter(e1);
    Adiministratif* a1 = new Adiministratif("RH", "Nom3", "Prénom3", 1, 153, 2019, "Brest", 253);
    g1.ajouter(a1);
    Enseignant_Chercheur* e_c2 = new Enseignant_Chercheur(4, 300, 300, 2019, "Nantes", 253, "Nom4", "Prénom4", 1, 103);
    g1.ajouter(e_c2);
    g1.supprimer(e_c1);
    g1.afficher();
}

int main() {
    cout << "-----" << endl;
    scenario1();
    cout << "-----" << endl;
    cout << endl;
    scenario2();
    cout << "-----" << endl;

    //---------------------------------------  NB ------------------------------------
    // J'ai voulu utiliser une itération pour pouvoir récupérer le nombre d'école mais je ne peux pas l'utiliser dans ma fonction afficher..
    // J'ai quand même coder les 2 premiers scénarios, l'erreur se situe dans la deuxième lignes d'affichage (la troisième ligne dans l'énoncé).
    // Merci

    return 0;
}
