//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Catalogue::addTrajet(Trajet* t) {
    this->liste_trajet.add(t);
}

/*oid Catalogue::addTrajetCompose(char* villeA, char* villeB, TableauDynamique liste) {
    this->liste_trajet.add(villeA,villeB,liste);
}*/

TableauDynamique Catalogue::getListeTrajet() {
    return this->liste_trajet;
}

int Catalogue::getNbTrajets() {
    return this->liste_trajet.getCarsize();
}

void Catalogue::afficher() {
    int i;
    for(i=0;i<this->liste_trajet.getCarsize();i++) {
        cout << i << ": ";
        this->liste_trajet.getTrajet(i)->afficher();
        cout << endl;
    }
}
//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue () {
}
//----- Fin de Catalogue (constructeur)

Catalogue::~Catalogue () {} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

