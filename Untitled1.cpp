#include <iostream>

using namespace std;

int main(){

	// deklaracja zmiennych
	short zmienna = 2;
	float zmiennoprzecinkowa = 3.21;
	string tekst = "tekst";
	char znak = 'a';
	bool logiczny = false;
	/*
	cout << "tak";
	cout << endl;
	cout << "Przez Przemka";
	cout << endl; // koniec lini
	cout << "liczba " << zmienna; //wyswietlenie zmiennych
	
	string wyraz;
	cout << "podaj jakis wyraz ";
	cin >> wyraz;
	cout << "podaj wyraz: " << wyraz;
	*/
	
	string imie;
	cout << "wpisz imie";
	cin >> imie;
	
	float wiek;
	cout << "podaj wiek";
	cin >> wiek;
	cout << "witaj masz na imie " << imie << " i masz " << wiek;
	
	return 0;
}