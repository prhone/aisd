#include <iostream>
#include <cstdlib>
using namespace std;

/* Program oblicza tygodniowy i roczny zarobek pracownika na podstawie liczby przepracowanych godzin, a takze sprawdza w ktorym progi podatkowym miesci sie
jego roczny zarobek i oblicza skladke podatkowa */

int main() {
	//pp - wynagrodzenie podstawowe
	float pp = 0;
	//lg - liczba godzin
	float lg = 0;
	//sg - stawka godzinowa
	float sg = 0;
	cout<<"Czesc uzytkowniku! Jestem programem, ktory oblicza tygodniowy i roczny zarobek pracownika na podstawie przepracowanych godzin, a takze sprawdzam w ktorym progu podatkowym miesci sie Twoj roczny zarobek, ile wynosi podatek i podaje Twoj roczny zarobek po odjeciu podatku"<<endl;
	cout<<"Drogi uzytkowniku, podaj mi Twoje podstawowe wynagrodzenie za godzine brutto"<<endl;
	cin>>sg;
	cout<<"A teraz podaj mi liczbe przepracowanych godzin tygodniowo"<<endl;
	cin>>lg;
	//zarobek_bez_ng - zarobek bez wynagrodzenia dodatkowego
	float zarobek_bez_ng = lg*sg;
	//ng - wynagrodzenie dodatkowe
	float ng = 0;
	//zaronek_z_ng - zarobek z wynagrodzeniem dodatkowym
	float zarobek_z_ng = 42*sg+ng*sg*2;
	float pensja_tygodniowa;
	if (lg <= 42) {
		pensja_tygodniowa=zarobek_bez_ng;
		cout<<"Twoj zarobek tygodniowy wynosi: "<<pensja_tygodniowa<<" zl"<<endl;
	}
	else {
		ng = lg - 42;
		pensja_tygodniowa = zarobek_z_ng;
		cout<<"Twoj zarobek tygodniowy wynosi: "<<pensja_tygodniowa<<" zl"<<endl;
	};
	//roczny_zarobek - zarobki w skali roku
	float roczny_zarobek = 52 * pensja_tygodniowa;
	
	//drugi_prog_podatkowy_roczny_zarobek - drugi prog podatkowy wynoszacy 21% rocznego zarobku
	float drugi_prog_podatkowy_roczny_zarobek = (0.21*roczny_zarobek);
	//pierwszy_prog_podatkowy_roczny_zarobek - pierwszy prog podatkowy wynoszacy 19% rocznego zarobku
	float pierwszy_prog_podatkowy_roczny_zarobek = (0.19*roczny_zarobek);
	//trzeci_prog_podatkowy_roczny_zarobek - trzeci prog podatkowy wynoszacy 28% od rocznego zarobku
	float trzeci_prog_podatkowy_roczny_zarobek = 0.28*roczny_zarobek;
	
	//petla, ktora sprawdza w ktorym przedziale podatkowym miesci sie nasz roczny_zarobek
		
	if (roczny_zarobek <= 30000){
		if	(roczny_zarobek >= 20000)	{
			
			cout<<"Znajdujesz sie w drugim progu podatkowym, a Twoj podatek wyniesie: "<<(drugi_prog_podatkowy_roczny_zarobek)<<" zl"<<endl;
			cout<<"Po odjeciu podatku Twoje zarobki roczne wynosza: "<<roczny_zarobek-drugi_prog_podatkowy_roczny_zarobek<<" zl"<<endl;
		}
		else {
			
			cout<<"Znajdujesz sie w pierwszym progu podatkowym, a Twoj podatek wyniesie: "<<(pierwszy_prog_podatkowy_roczny_zarobek)<<" zl"<<endl;
			cout<<"Po odjeciu podatku Twoje zarobki roczne wynosza: "<<roczny_zarobek-pierwszy_prog_podatkowy_roczny_zarobek<<" zl"<<endl;
		}
	}
	else {
		cout<<"Znajdujesz sie w trzecim progu podatkowym, a Twoj podatek wyniesie: "<<(trzeci_prog_podatkowy_roczny_zarobek)<<" zl"<<endl;
		cout<<"Po odjeciu podatku Twoje zarobki roczne wynosza: "<<roczny_zarobek-trzeci_prog_podatkowy_roczny_zarobek<<" zl"<<endl;
		
	}

	return 0;ssd
	}
	
