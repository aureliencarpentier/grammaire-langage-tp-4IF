#include <iostream>
#include "lexer.h"
#include "string"
#include "automate.h"
#include "e0.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e7.h"
#include "e8.h"
#include "e9.h"

int main(void) {
  string chaine;
  cout << "Entrer l'équation:  ";
	cin >> chaine;
  Automate automate(chaine);
  automate.executer();

   return 0;
}

