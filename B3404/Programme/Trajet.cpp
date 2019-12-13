/*************************************************************************
                            Trajet - Description
                             -------------------
Cette classe sert a gerer l'ajout de trajet, c'est une classe ancetre de la
classe TrajetSimple et de la classe TrajetCompose. Elle gère les attributs
ville depart et ville d'arrivee des trajets. 

*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include<string.h>

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


   char* Trajet::getVilleDepart()
  {
    return this -> ville_depart;
  }
  
  char* Trajet::getVilleArrivee()
  {
    return this -> ville_arrivee;
  }

  void Trajet::afficher() {
  }
//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet ( char* ville_depart, char* ville_arrivee)
{
  this-> ville_depart = new char[60];
  strcpy(this->ville_depart,ville_depart);
  this-> ville_arrivee = new char[60];
  strcpy(this->ville_arrivee,ville_arrivee);

} //----- Fin de Trajet

Trajet::Trajet() {
    this-> ville_depart = new char[60];
    this-> ville_arrivee = new char[60];
}


Trajet::~Trajet ( )
{
  delete[](ville_arrivee);
  delete[](ville_depart);
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

