/*************************************************************************
                           TableauDynamique  -  description
                             -------------------
Cette classe sert a gére les tableau dynamique. Elle peut en crée, les
agradir, et y ajouter des éléments.
Cette classe utilise TrajetSimple ainsi que Trajet.

*************************************************************************/

//---------- Réalisation de la classe <TableauDynamique> (fichier TableauDynamique.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TableauDynamique.h"
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

  void TableauDynamique::add(Trajet* t)
  {
    carsize +=1;
    
    Trajet** tableau_copie = new Trajet*[carsize];
    
    if (carsize != 0)
    {
        for (int i = 0; i < carsize - 1; i++)
      {

        tableau_copie[i] = tableau[i];
      }
    }
    tableau_copie[carsize-1] = t;
    
    delete[](tableau);
    
    tableau = new Trajet*[carsize];
    tableau = tableau_copie;

      
  }

  
  int TableauDynamique::getCarsize() {
    return this->carsize;
  }
      
  Trajet* TableauDynamique::getTrajet(int n) {
    if(n>=0 && n<this->carsize)
      return this->tableau[n];
    else 
      cout << "pas de trajet pour cet index" << endl;
  } 


//-------------------------------------------- Constructeurs - destructeur

TableauDynamique::TableauDynamique ()
// Algorithme :
//
{
  carsize = 0;
  
  tableau = new Trajet* [carsize];
} //----- Fin de TableauDynamique


TableauDynamique::~TableauDynamique ()
// Algorithme :
//
{ 
#ifdef MAP
    cout << "Appel au destructeur de <TableauDynamique>" << endl;
#endif
} //----- Fin de ~TableauDynamique


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

