#include "BazaTestu.hh"

using namespace std;

bool otworz(ifstream & wej, string nazwa)
{
  wej.open(nazwa);
  if(wej.is_open())
    {
      return 1;
    }
  cerr << "Blad podczas otwierania pliku. Program zamknie sie." << endl;
  exit(3);
}

void zamknij(ifstream & wej)
{
  wej.close();
}

bool WczytajPytanie(ifstream & wej, WyrazenieZesp & WyrZ)
{
  wej >> WyrZ;
  if(wej.good())
    {
      return 1;
    }
  return 0;
}

LZespolona WczytajOdpowiedz(std::istream & strm)
{
  LZespolona temp;
  int proby=0;
  do{
    strm >> temp;
    if(!strm.good())
      {
	proby++;
	cerr << "Wprowadzono nieprawidlowy format liczby. Sproboj jeszcze raz." << endl;
	strm.clear();
	strm.ignore(1000,'\n');
      }
    else
      {
	return temp;
      }
  }while(proby<3);
  cerr << "Trzy bledne proby wprowadzenia liczby. Program zakonczy sie." << endl;
  exit(0);
}

bool CzyPoprawne(LZespolona odp, WyrazenieZesp zad)
{
  return(odp==Oblicz(zad));
}
