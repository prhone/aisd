/* Jest to program, ktÛry losuje liczby do chwili kiedy dwa razy z rzÍdu zostanie wylosowana ta sama liczba */
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

main(){
	
	char znak;
	int a;
	int b;
	
	cout<<PL("Drogi uøytkowniku, jestem programem, ktÛry losuje liczby do chwili kiedy zostanie wylosowana dwa razy z rzÍdu ta sama liczba")<<endl;
	
	do {
		cout<<PL("Podaj liczbÍ (a) od ktÛrej mam zaczπÊ losowanie:")<<endl;
		cin>>a;
		cout<<PL("Podaj liczbÍ (b) do ktÛrej mam losowaÊ:")<<endl;
		cin>>b;
		if(a>b) {
		do{
			cout<<PL("Liczba b nie moøe byÊ mniejsza od a")<<endl;
			cout<<PL("Wprowadü liczbÍ b jeszcze raz:")<<endl;
			cin>>b;
		}
		while(a>b);
		}
		else{
		
		srand(time(0));
		
		int i;
		int * tablica = new int[i];
		
		int zakres_a_b=b-a+1;
		int liczba;
		
		do {
			tablica[i]=a+rand()%zakres_a_b;
			cout<<tablica[i]<<endl;
			if(tablica[i]==tablica[i-1]) {
				cout<<PL("Liczba jaka zosta≥a wylosowana dwa razy z rzÍdu to: ")<<tablica[i]<<endl;
				cout<<PL("Liczba losowaÒ to: ")<<i+1<<endl;
				liczba=1;
			}
			else {
				
				i=i+1;
				liczba=0;
				
			}
		} while(liczba!=1);
		
		
		}
				
		cout<<PL("Czy chcesz losowaÊ jeszcze raz? [T/N]")<<endl;
		cin>>znak;
	}
	while(znak=='T'||znak=='t');
	
	
}
