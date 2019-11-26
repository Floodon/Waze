/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

   char* Trajet::getVilleDepart()
  {
    return this -> ville_depart;
  }
  
  char* Trajet::getVilleArrivee()
  {
    return this -> ville_arrivee;
  }
  
  void Trajet::afficher()
  {
    cout << ville_depart << endl;
  }


//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet ( char* ville_depart, char* ville_arrivee)
{
  this->ville_depart = ville_depart;
  this -> ville_arrivee = ville_arrivee;

} //----- Fin de Trajet


Trajet::~Trajet ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

