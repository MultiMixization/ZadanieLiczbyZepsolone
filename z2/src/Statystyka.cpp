#include "Statystyka.hh"

void inicjuj(Statystyka &stat)
{
  stat.poprawne=0;
  stat.niepoprawne=0;
  stat.wszystkie=0;
}

void poprawna(Statystyka &stat)
{
  stat.poprawne++;
  stat.wszystkie++;
}

void niepoprawna(Statystyka &stat)
{
  stat.niepoprawne++;
  stat.wszystkie++;
}

int IleDobrych(Statystyka stat)
{
  return stat.poprawne;
}

int IleWszystkich(Statystyka stat)
{
  return stat.wszystkie;
}

int ProcentDobrych(Statystyka stat)
{
  return stat.poprawne*100/stat.wszystkie;
}

void DistrPoint(bool wynik, Statystyka & stat)
{
  if(wynik==1)
    {
      poprawna(stat);
    }
  else
    {
      niepoprawna(stat);
    }
}

void Podsumowanko(Statystyka stat)
{
  cout << "--Twoje wyniki--" << endl;
  cout << "Poprawnych odpowiedzi: " << IleDobrych(stat) << endl;
  cout << "Zadanych pytan: " << IleWszystkich(stat) << endl;
  cout << "Twoj wynik: " << ProcentDobrych(stat) << "%" << endl;
}
