/** 
*   \file main.cpp
*   \mainpage Laboratorium 1 & 2.
*   \author  Dawid Domerecki \n
//  Indeks 200584 \n
//  Pamsi Czwartek 10:00\n

******************************/
/*!
* \brief Program ucuchamiamy z 1 parametrem rownym liczbie powtorzen.
*
*/


#include "tablica.h"
#include "obliczenia.h"
#include <iostream>
#include <fstream>  
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{
	fstream plik, plik2;
	plik.open("dane.txt");
	plik2.open("dane2.txt");
	tablica objekt(plik, plik2);
	//objekt.wyswietl();

	obliczenia algorytm;
	algorytm.mnoz(objekt.zwroctab(), objekt.zwroctabspr(),atoi(argv[1]),objekt.zwrocrozmiar());
	objekt.zapisz(algorytm.zwroctabczas(),atoi(argv[1]));
	objekt.odwroc(objekt.zwroctab());
	objekt.dodaj_element(objekt.zwroctab(), 5);
	//objekt.wyswietl();
}
	

