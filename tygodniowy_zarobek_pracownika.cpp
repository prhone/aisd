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
	cout<<"Drogi uzytkowniku, podaj mi Twoje podstawowe wynagrodzenie za godzine brutto"<<endl;
	cin>>sg;
	cout<<"A teraz podaj mi liczbe przepracowanych godzin tygodniowo"<<endl;
	cin>>lg;
	if (lg <= 42) {
		cout<<"Twoj zarobek wynosi: "<<lg*sg;
	}
	else {
		//ng - wynagrodzenie dodatkowe
		float ng = 0;
		ng = lg - 42;
		cout<<"Twoj zarobek wynosi: "<<42*sg+ng*sg*2;
	}
}
