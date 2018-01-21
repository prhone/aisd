/*Program nadajπcy tablicy 10cio elementowej wartoúci wygenerowane losowo*/

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
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

	cout<<PL("Drogi uøytkowniku, jestem programem, ktÛry nadaje tablicy 10cio elementowej wartoúci wygenerowane losowo")<<endl;
	
	
	int i=10;
	srand(time(0));
	int a, b;
	int suma=0;
	int suma_kwadratow=0;
	int iloczyn=1;
	int ilosc_liczb=0;
	float srednia_arytmetyczna=0;
	
	do{
	cout<<PL("Podaj liczbÍ od ktÛrej mam losowaÊ: ")<<endl;
	cin>>a;
	cout<<PL("Podaj liczbÍ do ktÛrej mam losowaÊ: ")<<endl;
	cin>>b;
	cout<<"\n\n";
	cout<<"Liczby w tablicy: "<<endl;
	int liczba;	
	int *tablica = new int[i];	
	for(i=0; i<10;){
		liczba = a+rand()%(b-a+1);
		tablica[i] = liczba;
		cout<<tablica[i]<<endl;
		
		suma+=liczba;
		suma_kwadratow+=liczba*liczba;
		iloczyn*=liczba;
		
		i+=1;
		ilosc_liczb+=1;
		
	};
	
	cout<<"Suma: "<<suma<<endl;
	cout<<PL("Suma kwadratÛw: ")<<suma_kwadratow<<endl;
	cout<<PL("Iloczyn tablicy: ")<<iloczyn<<endl;
	srednia_arytmetyczna=(float)suma/(float)ilosc_liczb;
	cout<<PL("årednia arytmetyczna: ")<<srednia_arytmetyczna<<endl;
	
	
	cout<<endl;
	cout<<PL("Czy chcesz kontynuowaÊ? [T/N]")<<endl;
	cin>>znak;
	suma=0;
	suma_kwadratow=0;
	iloczyn=1;
	srednia_arytmetyczna=0;
	ilosc_liczb=0;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
