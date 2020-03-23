#include <Statystka.hh>

void inicjuj(Statystyka &stat)
{
}

void poprawna(Statystyka &stat)
{
  stat.poprawne++;
  stat.wszystkie++;
}

void niepoprawna(Statstyka &stat);
{
  stat.niepoprawne++;
  stat.wszystkie++;
}

int IleDobrych(Statystyka stat);
{
  return stat.poprawne;
}

int IleWszystkich(Statystyka stat);
{
  return stat.wszystkie;
}

int ProcentDobrych(Statystyka stat);
{
  return stat.dobre*100/stat.wszystkie;
}

ostream & operator << (ostream &strm, Statystyka stat)
{
  return strm;
}
