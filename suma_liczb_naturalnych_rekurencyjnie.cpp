/* Algorytm oblicza sumê liczb naturalnych dla a=1 i b=n rekurencyjnie */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	int a = 1;
	int b;
	int suma;
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory oblicza sume liczb naturalnych dla a=1 i b=n"<<endl;
	do {
	cout<<"WprowadŸ liczbe b"<<endl;
	cin>>b;
	if (b>1) {
		suma = (b*(b+1))/2;
		cout<<"Suma wynosi: "<<suma<<endl;
	}
	else {
		cout<<"Liczba b nie moze byc mniejsza od 1"<<endl;
	};
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t'); {
		system("PAUSE");
		return EXIT_SUCCESS;
	}
}
