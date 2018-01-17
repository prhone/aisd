/* Algorytm oblicza sumê liczb naturalnych dla a=1 i b=n iteracyjnie w petli while */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	int a = 1;
	int b;
	int suma =0;
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory oblicza sume liczb naturalnych dla a=1 i b=n"<<endl;
	do {
	cout<<"WprowadŸ liczbe b"<<endl;
	cin>>b;
	while (a<=b) {
		suma = suma + a;
		a = a+1;
	};
	cout<<"Suma liczba naturalnyh wynosi: "<<suma<<endl;
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t'); {
		system("PAUSE");
		return EXIT_SUCCESS;
	}
}
