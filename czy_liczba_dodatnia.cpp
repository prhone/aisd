#include <cstdlib>
#include <iostream>
using namespace std;
/* To jest program, ktory sprawdza czy wprowadzona przez uzytkownika dowolna liczba calkowita jest dodatnia. Jezeli liczba bedzie dodatnia wyswietli
napis "dodatnia". Jesli liczba bedzie zerem wyswietli "zero", a jesli liczba bedzie ujemna wyswietli "ujemna". */



int main() {
	
	char znak;
	do {
		int liczba = 0;
		cout<<"Czesc uzytkowniku! Jestem programem, ktory sprawdza czy liczba, ktora mi podasz jest liczba dodatnia, ujemna czy rowna zero."<<endl;
		cout<<"Moj drogi uzytkowniku, podaj mi liczbe calkowita"<<endl;
		cin>>liczba;
		if (liczba >= 0) {
			if (liczba == 0) {
				cout<<"zero"<<endl;
			}
			else {
				cout<<"dodatnia"<<endl;
			}
		}
		else {
			cout<<"ujemna"<<endl;
		}
	cout<<"Czy chcesz kontynuowac?"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
