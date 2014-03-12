/*!
* \file tablica.h
* \brief Definicja klasy tablica
*
*/

#ifndef tablica_h
#define tablica_h
#include <fstream>  

using namespace std;

/*!
* \brief Klasa tablica - sluzy do przechowywania danych
*		na ktorych zostanie wykonany algorytmu.
*/
class tablica
{
private:
	int *tab, *tabspr;
	int rozmiar, rozmiarspr;
public:
	/*!
	* \brief Konstruktor alokujacy pamiec na 2 tablice.
	*
	*\param plik wejsciowy i sprawdzajacy
	*/
	tablica(fstream& plik, fstream& plik2);
	void wyswietl();
	/*!
	* \brief Metoda zapisujaca wyniki do pliku csv.
	*/
	void zapisz(long double*, int); 

	int zwrocrozmiar();
	int* zwroctab();
	int* zwroctabspr();
	/*!
	* \brief Metoda zamieniajaca elementy w tablicy.
	*/
	void zamien_elementy(int* T, int i, int j);
	void odwroc(int*);
	int* dodaj_element(int*, int);
	int* dodaj_elementy(int, int);

};
#endif