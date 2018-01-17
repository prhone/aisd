/* Ci¹g Fibanacciego rekurencyjnie */
#include <cstdlib>
#include <iostream>
using namespace std;

int fib(int n)
{
  if(n<3)
    return 1;
 
  	return fib(n-2)+fib(n-1);
}

main() {
	
	char znak;
	do {
	cout<<"Drogi uzytkowniku, jestem programem, ktory wypisuje wartosc ciagu Fibanacciego rekurencyjnie dla podanego n"<<endl;
	
	int n;
 
  	cout<<"Podaj liczbe wyrazu ciagu: ";
  	cin>>n;
 
  	cout<<n<<" wyraz ciagu ma wartosc "<<fib(n)<<endl;
	
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
