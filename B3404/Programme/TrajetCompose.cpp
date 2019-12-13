/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
La classe TrajetCompose herite de la classe Trajet. Cette classe gère les
trajet composé. Elle est constitué d'un trableau dynamique qui pointe vers
des tableau de trajet simple qui se suivent qui forment donc les trajet composé.

*************************************************************************/

//--- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) -----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TrajetCompose::addTrajet(TrajetSimple* t) {
    this->liste_trajet.add(t);
}

void TrajetCompose::afficher() {
    int i;
    for(i=0;i<this->liste_trajet.getCarsize();i++) {
      this->liste_trajet.getTrajet(i)->afficher();
      cout << "--";
    }
}

void TrajetCompose::setVilleDepart() {
    this->ville_depart = this->liste_trajet.getTrajet(0)->getVilleDepart();
    cout << this->ville_depart << endl;
}

void TrajetCompose::setVilleArrivee() {
    this->ville_arrivee = this->liste_trajet.getTrajet(this->liste_trajet.getCarsize()-1)->getVilleArrivee();
    cout << this->ville_arrivee << endl;
}




//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose ( )
{
    this-> liste_trajet = *(new TableauDynamique());
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

