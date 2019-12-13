//---------- Main function of the project (fichier Waze.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include<string.h>

//--------------------------------------------------------------- Includes
#include "Catalogue.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

int main(void) {
        Catalogue catalogue;
        char* villeA = new char[60];
        char* villeB = new char[60];
        char* mt = new char[60];
        while(1) {
        cout << "menu:\n" << endl;
        cout << "\t0: quitter" << endl;
        cout << "\t1: ajouter un trajet simple au catalogue\n" << endl;
        cout << "\t2: ajouter un trajet composé au catalogue\n" << endl;
        cout << "\t3: afficher le catalogue\n" << endl;
        cout << "\t4: rechercher un trajet (recherche simple)\n" << endl;
        cout << "\t5: rechercher un trajet (recherche avancee)\n" << endl;
        int choix;
        cin >> choix;
        switch(choix) {
            case 0:
                return 0;
            case 1: {
                cout << "\tVille depart: ";
                cin >> villeA;
                cout << "\tVille arrivee: ";
                cin >> villeB;
                cout << "\tMoyen Transport: ";
                cin >> mt;
                TrajetSimple* t = new TrajetSimple(mt,villeA,villeB);
                catalogue.addTrajet(t);
            }
                break;
            case 2: {
                TrajetCompose* t = new TrajetCompose();
                cout << "\tVille depart: ";
                cin >> villeA;
                while(1) {
                    cout << "\t0 pour quitter" << endl;
                    cout << "\tVille suivante: ";
                    cin >> villeB;
                    if(!(strcmp(villeB,"0")))
                        break;
                    cout << "\tMoyen Transport: ";
                    cin >> mt;
                    t->addTrajet(new TrajetSimple(mt,villeA,villeB));
                    strcpy(villeA,villeB);
                }
                catalogue.addTrajet(t);
                t->setVilleDepart();
                t->setVilleArrivee();
            }
                break;
            case 3:
                catalogue.afficher();
                break;
            case 4: {
                int i;
                int cpt = 0;
                cout << "\tVille depart: ";
                cin >> villeA;
                cout << "\tVille arrivee: ";
                cin >> villeB;

                for(i=0;i<catalogue.getNbTrajets();i++) {
                    if(!strcmp(villeA,catalogue.getListeTrajet().getTrajet(i)->getVilleDepart())
                    && !strcmp(villeB,catalogue.getListeTrajet().getTrajet(i)->getVilleArrivee())) {
                        cout << i << ": ";
                        catalogue.getListeTrajet().getTrajet(i)->afficher();
                        cpt++;
                        cout << endl;
                    }
                }
                if(cpt == 0)
                    cout << "Pas de trajet trouve" << endl;
            }            
                break;
            default:
                cout < "choix incorrect\n";
                continue ;
                // revenir au menu
        }
    }
    delete[](villeA);
    delete[](villeB);
    delete[](mt);

}