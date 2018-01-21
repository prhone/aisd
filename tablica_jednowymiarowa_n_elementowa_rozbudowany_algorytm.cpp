/*Tablica jednowymiarowa n-elementowa*/

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
#include <math.h>
#include <sstream>
using namespace std;

string PL( const char * text )
{
    string result;
    for(; * text; text++ )
    switch( * text )
    {
    case 'π': result += static_cast < char >( 0xa5 ); break;
    case 'Ê': result += static_cast < char >( 0x86 ); break;
    case 'Í': result += static_cast < char >( 0xa9 ); break;
    case '≥': result += static_cast < char >( 0x88 ); break;
    case 'Ò': result += static_cast < char >( 0xe4 ); break;
    case 'Û': result += static_cast < char >( 0xa2 ); break;
    case 'ú': result += static_cast < char >( 0x98 ); break;
    case 'ø': result += static_cast < char >( 0xbe ); break;
    case 'ü': result += static_cast < char >( 0xab ); break;
    case '•': result += static_cast < char >( 0xa4 ); break;
    case '∆': result += static_cast < char >( 0x8f ); break;
    case ' ': result += static_cast < char >( 0xa8 ); break;
    case '£': result += static_cast < char >( 0x9d ); break;
    case '—': result += static_cast < char >( 0xe3 ); break;
    case '”': result += static_cast < char >( 0xe0 ); break;
    case 'å': result += static_cast < char >( 0x97 ); break;
    case 'Ø': result += static_cast < char >( 0xbd ); break;
    case 'è': result += static_cast < char >( 0x8d ); break;
        default: result += * text; break;
    }
    return result;
}


main() {
	
	char znak;

	cout<<PL("Drogi uøytkowniku, jestem programem, ktÛry nadaje tablicy n-elementowe wartoúci od a do b")<<endl;
	
	do{
		
	int i=0,j=0, k=0;
	int a=0;
	int b=0;
	int suma=0;
	float srednia=0;
	int suma_przez_3=0;
	float srednia_przez_3=0;
		
	cout<<PL("Podaj ile elementÛw ma byÊ w tablicy: ")<<endl;
	cin>>i;
	cout<<PL("Podaj liczbÍ (a) od ktÛrej mam zaczπÊ losowaÊ: ")<<endl;
	cin>>a;
	
	cout<<PL("Podaj liczbÍ (b) do ktÛrej mam losowaÊ: ")<<endl;
	cin>>b;
	
	while (b<a)	{
		cout<<PL("Liczba b musi byÊ wiÍksza od liczby a!")<<endl;
		cin>>b;
	}
	
	srand(time(0));	
	int liczba;	
	int *tablica = new int[i];
	int *tablica_przez_3 = new int[k];
		
	for(j=0; j<i;){
		liczba=a+rand()%((b-a)+1);
		tablica[j]=liczba;
		suma+=liczba;
		if(liczba%3==0) {
			tablica_przez_3[k]=liczba;
			cout<<k+1<<" element tablicy podzielny przez 3 to: "<<tablica_przez_3[k]<<endl;
			suma_przez_3+=tablica_przez_3[k];
			k+=1;
		}
		j+=1;
	};
	
	cout<<"\n";
	
	srednia_przez_3=(float)suma_przez_3/k;
	
	cout<<PL("Suma elementÛw podzielnych przez 3 to: ")<<suma_przez_3<<endl;
	cout<<PL("årednia elementÛw podzielnych przez 3 to: ")<<srednia_przez_3<<endl;
	
	cout<<"\n\n";
	
	do{
		for(j=0;j<i;){
		cout<<j+1<<PL(" element Twojej tablicy to: ")<<tablica[j]<<endl;
		j+=1;
		}
	}
	while(j<i);
	cout<<"\n\n";
	
	srednia=(float)suma/i;
	
	int max=tablica[0];
	
	for(j=0; j<i; j++){
	
		if(max<tablica[j]) {
			max=tablica[j];
		}
	
	}
	
	int min=tablica[0];
	
	for(j=0; j<i; j++){
		
		if(min>tablica[j]) {
			min=tablica[j];
		}
		
	}
	
	
	cout<<PL("Suma elementÛw tablicy: ")<<suma<<endl;
	cout<<PL("årednia arytmetyczna elementÛw tablicy: ")<<srednia<<endl;
	cout<<PL("NajwiÍksza wartoúÊ w tablicy: ")<<max<<endl;
	cout<<PL("Najmniejsza wartoúÊ w tablicy: ")<<min<<endl;
	
	cout<<endl;
	
	
	cout<<"\n\n";
	
	int e=0;
	cout<<PL("Twoja tablica w odwrotnej kolejnoúci: ")<<endl;
	do{
		for(e=j; e>0; e--){
			cout<<e<<PL(" elment Twojej tablicy to: ")<<tablica[e-1]<<endl;
			int liczba_do_3=tablica[e-1];
			/* funkcja pow(liczba,potÍga) z biblioteki <math.h> */
			cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" do potÍgi 3ciej to: ")<<pow(liczba_do_3, 3)<<endl;
			cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" + 1 to: ")<<tablica[e-1]+1<<endl;
			cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" razy 2: ")<<(tablica[e-1])*2<<endl;
			if(tablica[e-1]%2==0) {
				cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" jest parzysta.")<<endl;
				cout<<PL("i dodajÍ do niej 100: ")<<tablica[e-1]+100<<endl;
			}
			else {
				cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" jest nieparzysta.")<<endl;
			}
			if(4<=tablica[e-1] && tablica[e-1]<35) {
				cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" naleøy do przedzia≥u <4:35).")<<endl;
			}
			else {
				cout<<PL("Liczba: ")<<tablica[e-1]<<PL(" nie naleøy do przedzia≥u <4:35).")<<endl;
			}
			cout<<"\n";
			/* korzystam z biblioteki <sstream> */
			ostringstream ss;
			ss << tablica[e-1];
			string str = ss.str();
			cout<<"to jest string liczba: "<<str<<endl;
		}
	}
	while(j==0);
	
	cout<<"\n\n";
	
	
	cout<<PL("Czy chcesz kontynuowaÊ? [T/N]")<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
