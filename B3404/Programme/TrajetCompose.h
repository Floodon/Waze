/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
La classe TrajetCompose herite de la classe Trajet. Cette classe gère les
trajet composé. Elle est constitué d'un trableau dynamique qui pointe vers
des tableau de trajet simple qui se suivent qui forment donc les trajet composé.

*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées
#include "TableauDynamique.h"
#include "TrajetSimple.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
// Cette classe sert les trajet crée des trajet composé a partir de plusieur
// trajet simple
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    
    void addTrajet(TrajetSimple* t);
      // agrandit un trajet composé

    void setVilleDepart();
      // actualise la ville de depart du trajet composé

    void setVilleArrivee();
      // actualise la ville d'arrivée du trajet composé

    void afficher() ;


//-------------------------------------------- Constructeurs - destructeur

    TrajetCompose (); //constructeur


    virtual ~TrajetCompose ( ); //destructeur


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
  
//----------------------------------------------------- Attributs protégés

  TableauDynamique liste_trajet;

};

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H

