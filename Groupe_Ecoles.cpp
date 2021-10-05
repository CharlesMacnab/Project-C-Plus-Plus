//
// Created by charl on 16/01/2020.
//

#include "Groupe_Ecoles.h"

Groupe_Ecoles::Groupe_Ecoles(string n, double t) : nb_total_ecole(t), name(n){

}

void Groupe_Ecoles::afficher() {

    cout << "- Le groupe " << name << " est composé de " << nb_total_ecole << " écoles d'ingénieurs" << endl;

    //cout << "- L'école la plus ancienne de ce groupe est " <<  ancienne1(ecoles* e) <<". Elle est composé de " << ecole->get_nb_salarie() << " salariés." << endl;

    cout << "- " << name << " est composé de " << total_salarie << " salariés : " << endl;

    for (auto it : salarie){
        it->afficher();
    }
}

void Groupe_Ecoles::ajouter(Ecole *e) {
    ecoles.push_back(e);
}

void Groupe_Ecoles::supprimer(Salarie *s) {
    for(vector<Salarie*>::iterator it = salarie.begin() ; it != salarie.end() ; it ++){
        if(*it==s){
            salarie.erase(it);
            return;
        }
    }

}

void Groupe_Ecoles::ajouter(Salarie *s) {
    salarie.push_back(s);
}

void Groupe_Ecoles::changer_site_affectation(Salarie *salaries) {

}

string Groupe_Ecoles::ancienne1(Ecole* e) {
    int tmp=0;
    string ancienne =" ";
    for(vector<Ecole*>::iterator it = ecoles.begin() ; it != ecoles.end() ; it ++){
        if(tmp <= e->get_date()){
            ancienne = e->get_name();
        }
    }
    return ancienne;
}
