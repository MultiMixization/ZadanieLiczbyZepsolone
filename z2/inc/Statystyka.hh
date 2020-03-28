#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

#include <iostream>

using std::cout;
using std::endl;

struct Statystyka{
  int poprawne;
  int niepoprawne;
  int wszystkie;
};

void inicjuj(Statystyka &stat);
void poprawna(Statystyka &stat);
void niepoprawna(Statystyka &stat);
int IleDobrych(Statystyka stat);
int IleWszystkich(Statystyka stat);
int ProcentDobrych(Statystyka stat);

void DistrPoint(bool wynik, Statystyka & stat);
void Podsumowanko(Statystyka stat);

#endif
