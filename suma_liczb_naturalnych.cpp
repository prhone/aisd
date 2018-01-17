/* Algorytm oblicza sumê liczb naturalnych dla a=m i b=n iteracyjnie */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory oblicza sume liczb naturalnych dla a=m i b=n"<<endl;
	do {
	int a = 0;
	int b = 0;
	int suma =0;
	cout<<"Wprowadz liczbe a"<<endl;
	cin>>a;
	cout<<"Wprowadz liczbe b"<<endl;
	cin>>b;
	if (b>=a) {
	
	for (int j=a; j<=b; j++) {
		suma += j;
	};
	cout<<"Suma liczb od "<<a<<" do "<<b<<" wynosi: "<<suma<<endl;
	}
	else {
		cout<<"Liczba b musi byc wieksza od liczby a"<<endl;
	}
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t'); {
		system("PAUSE");
		return EXIT_SUCCESS;
	}
}
