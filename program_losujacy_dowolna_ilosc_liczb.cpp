/* Program to algorytm losujacy n liczb z zakresu podanego przez uzytkownika. */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

main() {
	
	int n;
	int x,y;
	cout<<"Drogi uzytkowniku, jestem programem, ktory losuje n liczb z zakresu podanego przez uzytkownika."<<endl;
	char znak;
	do {
	cout<<"Ile liczb mam wylosowac?"<<endl;
	cin>>n;
	cout<<"Podaj zakres od ktorego mam zaczac losowac."<<endl;
	cin>>x;
	cout<<"Podaj zakres do ktorego mam losowac."<<endl;
	cin>>y;
	srand(time(0));
	for(int i=0; i<n; i++) {
		cout<<x+rand()%y<<endl;
	}
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	
	}
	
	while(znak=='t' || znak=='T');
	system("PAUSE");
	return EXIT_SUCCESS;
	
}

