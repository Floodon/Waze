/*************************************************************************
                           TableauDynamique  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
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
//Permet de crée un tableau dynamique de le redimensionner puis d'ajouter des élèment
//------------------------------------------------------------------------

class TableauDynamique
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void add(  rajet nouveau_trajet )
  // augmente la taille du tableau d'un et ajoute le nouvelle élèment




//-------------------------------------------- Constructeurs - destructeur

    TableauDynamique ( );
    // Mode d'emploi :
    //  Crée un tableau dynamique vide
    // Contrat :
    //

    virtual ~TableauDynamique ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

  int carsize;
  
  Trajet tableau[];
  
  

};


#endif // TABLEAUDYNAMIQUE_H

