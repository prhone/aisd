/* Program sprawdza czy liczba a jest podzielna przez b */
#include <cstdlib>
#include <iostream>
#include <conio.h>
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
	
	int a, b;
	char znak;
		
	cout<<PL("Drogi uøytkowniku, jestem programem, ktÛry sprawdza czy liczba a jest podzielna przez liczbÍ b.")<<endl;
	/* robi przerwÍ pomiÍdzy coutami
	getch();
	*/
	do{
	cout<<PL("Podaj liczbÍ a, ktÛra bÍdzie licznikiem.")<<endl;
	cin>>a;
	cout<<PL("Podaj liczbÍ b, ktÛra bÍdzie mianownikiem.")<<endl;
	cin>>b;
	do {
		cout<<PL("Nie moøna dzieliÊ przez 0")<<endl;
		cout<<PL("Podaj liczbÍ rÛønπ od zera")<<endl;
		cin>>b;
	}
	while (b==0);
	if(a%b==0) {
		
		cout<<"LICZBA "<<a<<" JEST PODZIELNA PRZEZ "<<b<<"."<<endl;
	}
	else {
		cout<<"LICZBA "<<a<<" NIE JEST PODZIELNA PRZEZ "<<b<<"."<<endl;
	}
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
