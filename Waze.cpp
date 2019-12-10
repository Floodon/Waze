//---------- Main function of the project (fichier Waze.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//--------------------------------------------------------------- Includes
#include "Catalogue.h"
#include "TrajetSimple.h"

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
        cout << "\t4: rechercher un trajet\n" << endl;
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
                catalogue.addTrajet(mt, villeA, villeB);
            }
                break;
            /*case 2:
                TrajetCompose t;
                while(1) {
                    cout << "0 pour quitter" << endl;
                    cout << "\tVille depart: ";
                    cin >> villeA;
                    if(strcmp(villeA,"0"))
                        break;
                    cout << "\tVille arrivee: ";
                    cin >> villeB;
                    Trajet t_simple(villeA,villeB);
                    t.add(t_simple);
                }
                catalogue.addTrajet(t);
                break;*/
            case 3:
                catalogue.afficher();
            default:
                cout < "choix incorrect\n";
                continue ;
                // revenir au menu
        }
    }
}