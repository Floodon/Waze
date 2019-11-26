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

//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue () {}
//----- Fin de Catalogue (constructeur)

Catalogue::~Catalogue () {} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

