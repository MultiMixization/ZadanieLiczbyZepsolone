#include <iostream>
#include "BazaTestu.hh"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "Statystyka.hh"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main()
{
  LZespolona odp;
  std::ifstream wej;
  WyrazenieZesp dzial;
  Statystyka stat;
  inicjuj(stat);
  string nazwa=PytajNazwa();
  otworz(wej, nazwa);
  while(WczytajPytanie(wej, dzial))
    {
      cout << "Pytanie " << stat.wszystkie+1 << ". " << dzial << endl;
      cout << "Twoja odpowiedz: ";
      odp=WczytajOdpowiedz(cin);
      DistrPoint(CzyPoprawne(odp, dzial), stat);
      cout << endl;
    }
  zamknij(wej);
  Podsumowanko(stat);
  return 0;
}
