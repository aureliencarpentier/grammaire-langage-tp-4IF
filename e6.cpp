#include "automate.h"
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e9.h"
#include <iostream>

E6::E6():Etat("E6"){}

bool E6::transition(Automate & automate, Symbole*s) {
      
 
        switch (*s){
        
        case CLOSEPAR:
            automate.decalage(s, new E9());
            break;
        
        case PLUS:
            automate.decalage(s, new E4());
            break;
        
        case MULT:
            automate.decalage(s, new E5());
            break;

        default:
          cout << "expression invalide" << endl;
          exit(0);
        
        }
        return false;
    }
