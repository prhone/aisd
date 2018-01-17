/* Algorytm oblicza srednia liczb naturalnych dla a=m i b=n iteracyjnie */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory oblicza srednia liczb naturalnych dla a=m i b=n"<<endl;
	do {
	float a = 0;
	float b = 0;
	float suma =0;
	cout<<"Wprowadz liczbe a"<<endl;
	cin>>a;
	cout<<"Wprowadz liczbe b"<<endl;
	cin>>b;
	if (b>=a) {
	
	for (float j=a; j<=b; j++) {
		suma += j;
	};
	float srednia = suma/(b-a+1);
	cout<<"Srednia sumy liczb od "<<a<<" do "<<b<<" wynosi: "<<srednia<<endl;
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
