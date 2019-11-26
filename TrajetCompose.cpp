/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

    void TrajetCompose::addTrajet (Trajet nouveau_trajet_simple)
    {
      
      if (carsize == 0)
      {
        liste_trajet.add(nouveau_trajet_simple);
      }
      else
      {
        ville_de_depart = getVilleDepart()
        
        if (liste_trajet[carsize-1].ville_arrivee == ville_de_depart)
        {
          liste_trajet.add(nouveau_trajet_simple);
        }
      }
    }




//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose ( ):
// Algorithme :
//

{
  carsize = 0;
  
  liste_trajet = new TableauDynamique[carsize];

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

