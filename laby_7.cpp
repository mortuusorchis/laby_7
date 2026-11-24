#include <iostream>;
using namespace std;
void zadanie2_1();
void zadanie2_2();
void zadanie2_3();
void zadanie1();
void zadanie2_();


int main() {
	zadanie2_1();
	zadanie2_2();
	zadanie2_3();
	zadanie2_();
	}

void zadanie2_1() {
	const int tableSize = 5;
	int tab[tableSize];
	cout << "Wprowadz do tablicy 5 elementow: " << endl;

	int suma_elementow = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tab[i];
		suma_elementow = suma_elementow + tab[i];
	}
	cout << "Elementy twojej tablicy wraz z przypisanymi indeksami: " << endl;
	for (int i = 0; i < 5; i++) {

		cout << "indeks: " << i << " wartosc tablicy: " << tab[i] << endl;
	}
	cout << endl;
	cout << "Suma elementow tablicy wynosi: " << suma_elementow << endl;

	cout << endl;

	int* ptr[tableSize]; // deklaracja tablicy wskaźników

	for (int i = 0; i < tableSize; i++) {
		ptr[i] = &tab[i];
		cout << "indeks: " << i << " wartosc ze wskaznika: " << *ptr[i] << endl;
	}
}
void zadanie2_2() {
	const int tableSize = 5;
	int tab[tableSize];
	int* p = &tab[0];

	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tab[i];
	}
	cout << "Przechodzenie po calej tablisy za pomoca wskaznika p " << endl;

	for (int i = 0; i < tableSize; i++) {
		cout << "Adres: " << p << "  Wartosc: " << *p << endl;
	}
}
void zadanie2_3() {
	int a, b;
	cout << "Podaj wartosc a: ";
	cin >> a;

	cout << "Podaj wartosc b: ";
	cin >> b; 
}

void zadanie2_() {
	int jakas_tablica[10];
	int* wsk;
	wsk = jakas_tablica;

		cout << "Tablica na poczatku: " << endl;
		for (int i = 0; i < 10; i++) {

		}
}