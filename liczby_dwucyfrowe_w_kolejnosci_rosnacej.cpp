/* Program, ktory wypisuje wszystkie liczby dwucyfrowe wieksze nie wieksze od k w kolejnosci rosnacej gdzie k jest liczba podana przez uzytkownika */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	
	char znak;
	do {
	int k;
	cout<<"Drogi uzytkowniku, jestem programem, ktory wyswietla liczby dwucyfrowe nie wieksze od k"<<endl;
	cin>>k;
	int i = 10;
	cout<<"Twoje liczby w kolejnosci rosnacej to: "<<endl;
	while (i <= k) {
		cout<<i<<endl;
		i = i + 1;
	}
	cout<<"Czy chcesz kontynuowac?"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
