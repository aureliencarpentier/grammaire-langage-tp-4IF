
#include "symbole.h"
#include "stack"
#include "lexer.h"

#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

using namespace std;

class Etat;

class Automate {

  public :
    Automate (string s);
    virtual ~Automate();
    void decalage (Symbole * s, Etat * e);
    void reduction(int n,Symbole * s);

    stack<Symbole*> getSymbolstack();
    stack<Etat*> getStatestack();
    void executer();


  protected :
    stack<Etat*> statestack;
    stack<Symbole*> symbolstack;
    Lexer lexer;
};

#endif