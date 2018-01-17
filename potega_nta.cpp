/* Program wylicza potega liczby x do n */

#include <cstdlib>
#include <iostream>
using namespace std;

long int potega(int x, int n)
{
    int wynik = 1;
 
    for (int i = 0; i<n; i++)
        wynik*=x;
 
    return wynik;
}

int main() {
	
	int x;
	int n;
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory wylicza nta potege liczby x."<<endl;
	
	do {
		
	cout<<"Podaj liczbe x."<<endl;
	cin>>x;
	cout<<"Podaj potege do ktorej chcesz spotegowac liczbe x."<<endl;
	cin>>n;
	
	cout<<"Potega liczby: "<<x<<" do "<<n<<" to: "<<potega(x,n)<<endl;
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
