//------------Description--------------------------------------------------
// 
// Cette classe sert cataloguer tous les trajet simple et composer garder en memoire.
// Elle est constituée d'un trableau dynamique et peut afficher les trajets ainsi que
// le nombre de trajet qui le compose. Elle posséde egalement une methode addTrajet qui
// permet d'ajouter un nouveau trajet au catalogue.
//
//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "TableauDynamique.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Catalogue {
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void addTrajet(Trajet* t);
        //Sert à ajouter un nouveau trajet au catalogue

    TableauDynamique getListeTrajet();
        //Retourne l'ensemble du catalogue

    int getNbTrajets();
        //Retourne le nombre de trajet dans le catalogue

    void afficher();

//-------------------------------------------- Constructeurs - destructeur
   
    Catalogue (); //constructeur

    virtual ~Catalogue ( ); //destructeur

protected:
//----------------------------------------------------- Attributs protégés
   
    TableauDynamique liste_trajet; 

};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H