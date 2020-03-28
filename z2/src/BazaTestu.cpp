#include "BazaTestu.hh"

using namespace std;

string PytajNazwa()
{
  string nazwa;
  cout << "Podaj nazwe pliku wejsciowego:";
  cin >> nazwa;
  cout << endl;
  return nazwa;
}

bool otworz(ifstream & wej, string nazwa)
{
  wej.open(nazwa);
  if(wej.is_open())
    {
      return 1;
    }
  return 0;
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
      }
    else
      {
	return temp;
      }
  }while(proby<3);
  exit(0);
}

bool CzyPoprawne(LZespolona odp, WyrazenieZesp zad)
{
  if(odp==Oblicz(zad))
    {
      return 1;
    }
  else
    {
      return 0;
    }
  return 0;
}
