/*************************************************************************
                            Trajet - Description
                             -------------------
Cette classe sert a gerer l'ajout de trajet, c'est une classe ancetre de la
classe TrajetSimple et de la classe TrajetCompose. Elle gère les attributs
ville depart et ville d'arrivee des trajets. 

*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//
//Cette classe sert a créer de nouveau trajet.
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    char* getVilleDepart();
  // retourne la ville de depart saisie
 
    char* getVilleArrivee();
  // retourne la ville d'arrivee saisie
    
    virtual void afficher();
 
//-------------------------------------------- Constructeurs - destructeur

    Trajet ( char* ville_depart, char* ville_arrivee); // constructeur

    Trajet();

    virtual ~Trajet ( ); //destructeur

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

  char* ville_depart;
  char* ville_arrivee;

};


#endif // TRAJET_H

