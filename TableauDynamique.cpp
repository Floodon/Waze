/*************************************************************************
                           TableauDynamique  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TableauDynamique> (fichier TableauDynamique.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TableauDynamique.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TableauDynamique::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

  TableauDynamique::add( Trajet nouveau_trajet)
  {
    
    Trajet* tableau_copie = new Trajet[carsize + 1];
    
    if (carsize != 0)
    {
        for (int i = 0; i < carsize, i++)
      {
        tableau_copie[i] = tableau[i]
      }
    }
    
    tableau_copie[carsize] = nouveau_trajet;
    
    carsize +=1;
    
    tableau = tableau_copie;
    
    delete(tableau);
    
    cout << tableau[carsize - 1];
      
  }
      
  




//-------------------------------------------- Constructeurs - destructeur

TableauDynamique::TableauDynamique ( )
// Algorithme :
//
{
  carsize = 0;
  //Trajet tableau[]
} //----- Fin de TableauDynamique


TableauDynamique::~TableauDynamique ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TableauDynamique>" << endl;
#endif
} //----- Fin de ~TableauDynamique


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

