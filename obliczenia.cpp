/*!
* \file obliczenia.cpp
* \brief Definicje metod klasy oliczenia.
*/
#include "obliczenia.h"
#include "tablica.h"


#include <iostream>
#include <fstream>  
#include <string>
#include <ctime>
using namespace std;

void obliczenia::start_zegar()
{
	czas = clock();
}
void obliczenia::stop_zegar()
{
	czas = clock() - czas;
}
void obliczenia::mnoz(int* tab, int* tabspr, int powtorzenia, int rozmiar)
{
	{
		tab2 = new int[rozmiar];
		tabczas = new long double[powtorzenia];
		for (int i = 0; i < powtorzenia; i++)
		{
			this->start_zegar();
			for (int j = 0; j < rozmiar; j++)
			{
				tab2[j] = tab[j] * 2;
			}
			for (int w = 0; w < rozmiar; w++)
			{
				if (tab2[w] == tabspr[w]){}
				else
				{
					cout << tabspr[w]<<endl;
					cout << tab2[w] << endl;
					cout << "Niezgodne dane";
				}
			}
			this->stop_zegar();
			tabczas[i] = czas;
		}
	}
}

long double* obliczenia::zwroctabczas()
{
	return tabczas;
	
}
