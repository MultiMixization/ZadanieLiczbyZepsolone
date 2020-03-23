#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

struct Statystyka{
  int poprawne;
  int niepoprawne;
  int wszystkie;
}

void inicjuj(Statystyka &stat);
void poprawna(Statystyka &stat);
void niepoprawna(Statystyka &stat);
int IleDobrych(Statystyka stat);
int IleWszystkich(Statystyka stat);
int ProcentDobrych(Statystyka stat);

ostream & operator << (ostream &strm, Statystyka stat);

#endif
