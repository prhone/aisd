/* Program to algorytm losujacy n liczb z wykorzystaniem generatora liczb pseudolosowych */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

main() {
	
	int n;
	cout<<"Drogi uzytkowniku, jestem programem, ktory losuje n liczb."<<endl;
	char znak;
	do {
	cout<<"Ile liczb mam wylosowac?"<<endl;
	cin>>n;
	srand(time(0));
	for(int i=0; i<n; i++) {
		cout<<rand()<<endl;
	}
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	
	}
	
	while(znak=='t' || znak=='T');
	system("PAUSE");
	return EXIT_SUCCESS;
	
}

