/* Jest to program, kt�ry losuje liczby do chwili kiedy dwa razy z rz�du zostanie wylosowana ta sama liczba */
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
    case '�': result += static_cast < char >( 0xa5 ); break;
    case '�': result += static_cast < char >( 0x86 ); break;
    case '�': result += static_cast < char >( 0xa9 ); break;
    case '�': result += static_cast < char >( 0x88 ); break;
    case '�': result += static_cast < char >( 0xe4 ); break;
    case '�': result += static_cast < char >( 0xa2 ); break;
    case '�': result += static_cast < char >( 0x98 ); break;
    case '�': result += static_cast < char >( 0xbe ); break;
    case '�': result += static_cast < char >( 0xab ); break;
    case '�': result += static_cast < char >( 0xa4 ); break;
    case '�': result += static_cast < char >( 0x8f ); break;
    case '�': result += static_cast < char >( 0xa8 ); break;
    case '�': result += static_cast < char >( 0x9d ); break;
    case '�': result += static_cast < char >( 0xe3 ); break;
    case '�': result += static_cast < char >( 0xe0 ); break;
    case '�': result += static_cast < char >( 0x97 ); break;
    case '�': result += static_cast < char >( 0xbd ); break;
    case '�': result += static_cast < char >( 0x8d ); break;
        default: result += * text; break;
    }
    return result;
}

main(){
	
	char znak;
	int a=0;
	int b=0;
	
	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry losuje liczby do chwili kiedy zostanie wylosowana dwa razy z rz�du ta sama liczba")<<endl;
	
	do {
		cout<<PL("Podaj liczb� (a) od kt�rej mam zacz�� losowanie:")<<endl;
		cin>>a;
		cout<<PL("Podaj liczb� (b) do kt�rej mam losowa�:")<<endl;
		cin>>b;
		
		while (a>b){
			cout<<PL("Liczba b nie mo�e by� mniejsza od a")<<endl;
			cout<<PL("Wprowad� liczb� b jeszcze raz:")<<endl;
			cin>>b;
		}
		
		srand(time(0));
		
		int i=0;
		int * tablica = new int[i];
		
		int zakres_a_b=b-a+1;
		int liczba;
		int liczba_losowan;
		
		do {
			tablica[i]=a+rand()%zakres_a_b;
			cout<<tablica[i]<<endl;
			if(tablica[i]==tablica[i-1]) {
				cout<<PL("Liczba jaka zosta�a wylosowana dwa razy z rz�du to: ")<<tablica[i]<<endl;
				liczba_losowan=i+1;
				cout<<PL("Liczba losowa� to: ")<<i+1<<endl;
				liczba=1;
			}
			else {
				
				i=i+1;
				liczba=0;
				
			}
		} while(liczba!=1);
		
		
	
				
		cout<<PL("Czy chcesz losowa� jeszcze raz? [T/N]")<<endl;
		cin>>znak;
	}
	while(znak=='T'||znak=='t');
	
	
}
