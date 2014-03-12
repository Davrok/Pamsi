/*!
*\file tablica.cpp
* \brief Definicje metod klasy tablica.
*
*/

#include "tablica.h"
#include "obliczenia.h"
#include <iostream>
#include <fstream>  
#include <string>
#include <ctime>
using namespace std;

tablica::tablica(fstream& plik, fstream& plikspr)
{
	plik >> rozmiar;
	plikspr >> rozmiarspr;
	tab = new int[rozmiar];
	tabspr = new int[rozmiarspr];
	for (int i = 0; i < rozmiar; i++)
	{
		plik >> tab[i];
	}
	for (int i = 0; i < rozmiarspr; i++)
	{
		plikspr >> tabspr[i];
	}
}
void tablica::wyswietl()
{
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] <<"\t" <<tabspr[i]<< endl;
	}
}
void tablica::zapisz(long double* tabczas, int powtorzenia)
{
	fstream plikcsv;
	plikcsv.open("dane.csv", ios::out);
	double suma;
	plikcsv << "Powtorzenia: " << "; "<< powtorzenia << endl;
	for (int i = 0; i < powtorzenia; i++)
	{
		suma = +tabczas[i];
		plikcsv << i + 1 << ";" << "Czas:" << "; " << tabczas[i]/CLOCKS_PER_SEC << "ms" << endl;
		
	}
	
}
int tablica::zwrocrozmiar()
{
	return rozmiar;
}
int* tablica::zwroctab()
{
	return tab;
}
int* tablica::zwroctabspr()
{
	return tabspr;
}
void tablica::zamien_elementy(int* T, int i, int j)
{
	int tmp = T[i];
	T[i] = T[j];
	T[j] = tmp;
}
void tablica::odwroc(int* T)
{
	for (int i = 0; i < rozmiar / 2; i++)
	{
		int tmp = T[rozmiar - i - 1];
		T[rozmiar - i - 1] = T[i];
		T[i] = tmp;
	}
}
int* tablica::dodaj_element(int* T, int e)
{
	int *tab8 = new int[rozmiar + 1];
	for (int i = 0; i < rozmiar; i++)
	{
		tab8[i] = T[i];
	}
	
	tab8[rozmiar + 1] = e;
	return tab8;

}
int* tablica::dodaj_elementy(int T1, int T2)
{
	int* tabela = new int[rozmiar + 2];
	for (int i = 0; i < rozmiar; i++)
	{
		tabela[i] = tab[i];
	}
	tabela[rozmiar + 1] = T1;
	tabela[rozmiar + 2] = T2;
	return tabela;
}

