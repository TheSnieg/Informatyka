	#include  <iostream>
	using namespace std;
	
	int main(){
	// #liczby calkowite - start, long unsigned short
	
	short a, b;
	cout << "podaj a ";
	cin >> a;
	cout << "podaj b ";
	cin >> b;
		
	// instrukcja warunkowa
	if(a > b){ // jezeli warunek sie spelni to wykona to co jest w klamrach
		cout << "a jest wieksze od b, ";
	}
	// if = operator przypisania
	// == operator porownania
	// != Nie rowne (rozne od)
	else if (a == b){ // jezeli warunek powyzej zwroci falsz to sprawdza kolejny warunek
	cout <<"a == b";
	}
	else{ // jezlei zaden z powyzszych warunkow sie nie spelni to wykonuje else
	cout << "a < b";
	}
//	else{ // jak warunek sie nie spelni to stanie sie to
//		cout << "b jest wieksze od a, ";
//	}
		
	system("pause");	
	}