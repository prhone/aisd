/* Algorytm Euklidesa iteracyjnie - program, ktory dla dwoch danych liczb a i b wyznacza najwiekszy wspolny dzielnik. Jezeli liczby sa rowne to otrzymamy NWD. max{a,b}:=max{a,b}-min{a,b} gdzie
max{a,b}, min{a,b} oznaczaja kolejno najwieksza i najmniejsza liczbe ze zbioru {a,b} */
#include <cstdlib>
#include <iostream>
using namespace std;

main() {
	
	char znak;
	do {
	int a,b;
	cout<<"Drogi uzytkowniku, jestem programem, ktory oblicza algorytm Euklidesa iteracyjnie"<<endl;
	char znak2;
	cout<<"Chcialbys sie dowiedziec co to algorytm Euklidesa? [T/N]]"<<endl;
	cin>>znak2;
	if (znak2=='T' || znak2== 't') {
		cout<<"Algorytm Euklidesa – algorytm wyznaczania najwiekszego wspolnego dzielnika dwoch liczb."<<endl; 
		cout<<"Zostal opisany przez greckiego matematyka, Euklidesa w jego dziele „Elementy” "<<endl;		
	}
	else {
	cout<<"Podaj pierwsza liczbe"<<endl;
	cin>>a;
	cout<<"Podaj druga liczbe"<<endl;
	cin>>b;
	int k;
	do {
		if (b>a) {
			b=b-a;
		}
		else {
			a=a-b;
		}	
	}
	while (a!=b);
		cout<<"Najwiekszy wspolny dzielnik liczb: "<<a<<" i "<<b<<" to "<<a<<endl;;
	}
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
