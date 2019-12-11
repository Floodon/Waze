/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include<string.h>
#define MAP

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

    void TrajetSimple::afficher()
    {
      cout << "de " << ville_depart << " à " << ville_arrivee << " en " << moyen_transport;
    }

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple ( char* mt, char* ville_depart, char* ville_arrivee): Trajet(ville_depart, ville_arrivee)
{
  this-> moyen_transport = new char[60];
  strcpy(this->moyen_transport,mt);
  #ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
  #endif
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
  delete[](moyen_transport);
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

