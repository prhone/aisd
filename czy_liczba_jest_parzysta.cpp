/* Program sprawdza czy liczba wprowadzona przez u¿ytkownika jest parzysta czy nieparzysta */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	
	int liczba;
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory sprawdza czy podana przez Ciebie liczba jest parzysta czy nie."<<endl;
	
	do{
	cout<<"Podaj liczbe"<<endl;
	cin>>liczba;
	
	if (liczba%2==0) {
		cout<<"Liczba "<<liczba<<" jest parzysta."<<endl;
	}
	else {
		cout<<"Liczba "<<liczba<<" jest nieparzysta."<<endl;
	}
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
