#include "TableauDynamique.h"
#include "Trajet.h"
using namespace std;
#include <iostream>

int main()
{
  
  Trajet p("e","w");
  
  TableauDynamique m;
  
  m.add(p);
  
  return 0;
}