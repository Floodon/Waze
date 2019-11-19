/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    char* getVilleDepart()
  // retourne la ville de depart saisie
 
    char* getVilleArrivee()
  // retourne la ville d'arrivee saisie
    
    virtual void afficher()
  // afficher les ville de depart et d'arrivee
    
    
//-------------------------------------------- Constructeurs - destructeur

    Trajet ( char* ville_depart, char* ville_arrivee) : this -> ville_depart(ville_depart), this -> ville_arrivee(ville_arrivee){}
    // Mode d'emploi :
    //    Crée les ville de depart et d'arrivee
    // Contrat :
    //

    virtual ~Trajet ( );
    // Mode d'emploi :
    //   
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

  char* ville_depart;
  char* ville_arrivee;


};


#endif // TRAJET_H

