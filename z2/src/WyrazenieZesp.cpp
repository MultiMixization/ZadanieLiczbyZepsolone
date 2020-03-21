#include "WyrazenieZesp.hh"

using std::cout;
using std::cin;

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

std::istream & operator >> (std::istream & strm, Operator & Op)
{
  char znak;
  strm >> znak;
  switch(znak)
    {
    case '+':
      Op=Op_Dodaj;
      break;
    case '-':
      Op=Op_Odejmij;
      break;
    case '*':
      Op=Op_Mnoz;
      break;
    case '/':
      Op=Op_Dziel;
      break;
    }
  return strm;
}

std::istream & operator >> (std::istream & strm, WyrazenieZesp & Wz)
{
  strm >> Wz.Arg1 >> Wz.Op >> Wz.Arg2;
  return strm;
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
