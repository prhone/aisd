#include <iostream>
#include <cstdlib>
using namespace std;

/* Program oblicza tygodniowy zarobek pracownika na podstawie liczby przepracowanych godzin */

int main() {
	//pp - wynagrodzenie podstawowe
	float pp = 0;
	//lg - liczba godzin
	float lg = 0;
	//sg - stawka godzinowa
	float sg = 0;
	cout<<"Czesc uzytkowniku! Jestem programem, ktory oblicza tygodniowy zaronek pracownika na podstawie przepracowanych godzin"<<endl;
	char znak;
	do {
	cout<<"Drogi uzytkowniku, podaj mi Twoje podstawowe wynagrodzenie za godzine brutto"<<endl;
	cin>>sg;
	do {
		cout<<"Drogi przybyszu z innej planety, w naszej czasoprzestrzeni nie mozna zarabiac mniej niz 0 zl"<<endl;
		cout<<"Podaj mi swoje wynagrodzenie brutto"<<endl;
		cin>>sg;
	}
	while (sg<0);
	cout<<"A teraz podaj mi liczbe przepracowanych godzin tygodniowo"<<endl;
	cin>>lg;
	do {
		cout<<"Drogi przybyszu z innej planety, w naszej czasoprzestrzeni nie mozna pracowac mniej niz 0 godzin"<<endl;
		cout<<"Podaj mi liczbe przepracowanych godzin tygodniowo"<<endl;
		cin>>lg;
	}
	while (lg<0);
	if (lg <= 42) {
		cout<<"Twoj zarobek wynosi: "<<lg*sg<<" brutto"<<endl;
	}
	else {
		//ng - wynagrodzenie dodatkowe
		float ng = 0;
		ng = lg - 42;
		cout<<"Twoj zarobek wynosi: "<<42*sg+ng*sg*2<<" brutto"<<endl;
	}
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
}
