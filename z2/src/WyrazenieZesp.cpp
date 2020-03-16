#include "WyrazenieZesp.hh"

using std::cout;
using std::cin;

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void wczytaj(WyrazenieZesp &WyrZ, unsigned int IndeksPyt, WyrazenieZesp *wskTabTestu)
{
  wyrZ.Arg1=wskTabTestu[IndeksPyt].Arg1;
  wyrZ.Op=wskTabTestu[IndeksPyt].Op;
  wyrZ.Arg2=wskTabTestu[IndeksPyt].Arg2;
}

void wyswietl(WyrazenieZesp WyrZ)
{
  cout << "(" << WyrZ.Arg1.re << WyrZ.Arg1.im << "i";
  switch(WyrZ.Op)
    {
    case Op_Dodaj:
      cout << "+";
      break;
    case Op_Odejmij:
      cout << "-";
      break;
    case Op_Mnoz:
      cout << "*";
      break;
    case Op_Dziel:
      cout << "/";
      break;
    }
  cout << WyrZ.Arg2.re << WyrZ.Arg2.im << "i)"; 
}

LZespolona Oblicz(WyrazenieZesp WyrZ)
{
  switch(WyrZ.Op)
    {
    case Op_Dodaj:
      return WyrZ.Arg1+WyrZ.Arg2;
      break;
    case Op_Odejmij:
      return WyrZ.Arg1-WyrZ.Arg2;
      break;
    case Op_Mnoz:
      return WyrZ.Arg1*WyrZ.Arg2;
      break;
    case Op_Dziel:
      return WyrZ.Arg1/WyrZ.Arg2;
      break;
    }
}
