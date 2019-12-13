/*************************************************************************
                           TableauDynamique  -  description
                             -------------------
Cette classe sert a gére les tableau dynamique. Elle peut en crée, les
agradir, et y ajouter des éléments.
Cette classe utilise TrajetSimple ainsi que Trajet.

*************************************************************************/

//---------- Interface de la classe <TableauDynamique> (fichier TableauDynamique.h) ----------------
#if ! defined ( TABLEAUDYNAMIQUE_H )
#define TABLEAUDYNAMIQUE_H

//--------------------------------------------------- Interfaces utilisées

#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TableauDynamique>
//
//Permet de crée un tableau dynamique, de le redimensionner puis d'ajouter des élèment.
//------------------------------------------------------------------------

class TableauDynamique
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    
    void add(Trajet* t);
      // cette methode redimensionne le tableau dynamique et y ajoute le nouvelle élément

    int getCarsize();
      // donne la taille du tableau dynamique

    Trajet* getTrajet(int n);
      // augmente la taille du tableau d'un et ajoute le nouvelle élèment




//-------------------------------------------- Constructeurs - destructeur

    TableauDynamique ( ); //constructeur

    virtual ~TableauDynamique ( ); //destructeur

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

  int carsize;
  
  Trajet** tableau;

};


#endif // TABLEAUDYNAMIQUE_H

