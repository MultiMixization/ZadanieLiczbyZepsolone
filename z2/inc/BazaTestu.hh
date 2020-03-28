#ifndef BAZATESTU_HH
#define BAZATESTU_HH

#include <iostream>
#include <fstream>

#include "WyrazenieZesp.hh"
#include "LZespolona.hh"
#include "Statystyka.hh"

std::string PytajNazwa();
bool otworz(std::ifstream & wej, std::string nazwa);
void zamknij(std::ifstream & wej);
bool WczytajPytanie(std::ifstream & wej, WyrazenieZesp & WyrZ);

LZespolona WczytajOdpowiedz(std::istream & strm);

bool CzyPoprawne(LZespolona odp, WyrazenieZesp zad);

#endif
