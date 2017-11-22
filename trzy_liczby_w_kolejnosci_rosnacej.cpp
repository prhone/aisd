#include <cstdlib>
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Jest to program pobierajacy od uzytkownika trzy liczby i wyswietlajacy je w porzadku rosnacym */

main () {
	double a, b, c;
	cout<<"Witaj uzytkowniku, to jest program, ktory pobiera trzy liczby i wyswietla je w porzadku rosnacym"<<endl;
	char znak;
	do {
	cout<<"Drogi uzytkowniku podaj trzy liczby"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if (a<b) {
		if (b>c) {
			cout<<"Twoje liczby w porzadku rosnacym to: "<<c<<" "<<a<<" "<<b<<endl;
		}
		else {
			cout<<"Twoje liczby w porzadku rosnacym to: "<<a<<" "<<b<<" "<<c<<endl;
		}
	}
	else {
		if (b>c) {
			cout<<"Twoje liczby w porzadku rosnacym to: "<<c<<" "<<b<<" "<<a<<endl;
		}
		else {
			cout<<"Twoje liczby w porzadku rosnacym to: "<<b<<" "<<c<<" "<<a<<endl;
		}
	}
	cout<<"Czy chcesz kontynuowac?"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
