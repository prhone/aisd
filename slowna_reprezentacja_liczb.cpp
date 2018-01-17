/* Program wyswietla slowna reprezentacje liczb od 0 do 10 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	
	int liczba;
	char znak;
	cout<<"Drogi uzytkowniku, jestem programem, ktory wyswietla slowna reprezentacje liczb od 0 do 10."<<endl;
	
	do{
	cout<<"Podaj liczbe od 0 do 10."<<endl;
	cin>>liczba;

		switch (liczba) {
			case 0:
				cout<<"zero"<<endl;
				break;
			case 1:
				cout<<"jeden"<<endl;
				break;
			case 2:
				cout<<"dwa"<<endl;
				break;
			case 3:
				cout<<"trzy"<<endl;
				break;
			case 4:
				cout<<"cztery"<<endl;
				break;
			case 5:
				cout<<"piec"<<endl;
				break;
			case 6:
				cout<<"szesc"<<endl;
				break;
			case 7:
				cout<<"siedem"<<endl;
				break;
			case 8:
				cout<<"osiem"<<endl;
				break;
			case 9:
				cout<<"dziewiec"<<endl;
				break;
			case 10:
				cout<<"dziesiec"<<endl;
				break;
			default:
				cout<<"Podaj liczbe od 0 do 10 klamczuszku :*"<<endl;
		}
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
