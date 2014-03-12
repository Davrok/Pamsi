#ifndef obliczenia_h
/*!
* \file obliczenia.h
* \brief Definicja klasy obliczenia.
*/
#define obliczenia_h

using namespace std;
/*!
* \brief Klasa obliczenia - sluzy do uruchomienie alogytmu 
*  oraz pomiaru czasu wykonania algorytmu.
* 
*/
class obliczenia
{
private:
	long  double czas;
	int *tab2;
	 long double *tabczas;
public:
	void start_zegar();	
	void stop_zegar();
	/*!
	*\brief metoda mnoz wykonuje zadane operacje oraz sprawdza\n
	*poprawnosc wykonania.
	* \param rozmiar, powtorzenia, dane, dane sprawdzajace
	* */

	void mnoz(int*, int*, int, int);
	long double* zwroctabczas();

};

#endif