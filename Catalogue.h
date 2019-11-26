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

//-------------------------------------------- Constructeurs - destructeur
    Catalogue ();

    virtual ~Catalogue ( );

protected:
//----------------------------------------------------- Attributs protégés
    TableauDynamique liste_trajet; 

};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H