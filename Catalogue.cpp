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
void Catalogue::addTrajet(char* mt, char* villeA, char* villeB) {
    this->liste_trajet.add(mt,villeA,villeB);
}

TableauDynamique Catalogue::getListeTrajet() {
    return this->liste_trajet;
}

int Catalogue::getNbTrajets() {
    return this->liste_trajet.getCarsize();
}

void Catalogue::afficher() {
    int i;
    for(i=0;i<this->liste_trajet.getCarsize();i++) {
        cout << "ouais" << endl;
        this->liste_trajet.getTrajet(i)->afficher();
    }
}
//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue () {
}
//----- Fin de Catalogue (constructeur)

Catalogue::~Catalogue () {} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

