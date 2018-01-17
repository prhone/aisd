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

main() {
	
	int a, b;
	char znak;
		
	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry sprawdza czy liczba a jest podzielna przez liczb� b.")<<endl;
	/* robi przerw� pomi�dzy coutami
	getch();
	*/
	do{
	cout<<PL("Podaj liczb� a, kt�ra b�dzie licznikiem.")<<endl;
	cin>>a;
	cout<<PL("Podaj liczb� b, kt�ra b�dzie mianownikiem.")<<endl;
	cin>>b;
	do {
		cout<<PL("Nie mo�na dzieli� przez 0")<<endl;
		cout<<PL("Podaj liczb� r�n� od zera")<<endl;
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
