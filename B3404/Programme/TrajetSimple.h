/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
Cette classe est une classe qui hérite de la classe Trajet. Elle sert à 
ajouter l'attribut moyen de transport à un trajet.

*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
// Cette classe gére le moyen de transport du trajet
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void afficher();
  // afficher la ville de depart, d'arrivee ainsi que le moyen de transport


//-------------------------------------------- Constructeurs - destructeur


    TrajetSimple ( char* moyen_transport, char* ville_depart, char* ville_arrivee); //constructeur

    virtual ~TrajetSimple ( ); //destructeur

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

char* moyen_transport;

};

#endif // TRAJETSIMPLE_H

