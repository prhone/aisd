/* Program oblicza pierwiastek z zadanej liczby */
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>
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
	
	double n;
	char znak;
	do {
		
	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry oblicza pierwiastek z zadanej liczby")<<endl;
	/* robi przerw� pomi�dzy coutami
	getch();
	*/
	cout<<PL("Podaj liczb�, z kt�rej chcesz obliczy� pierwiastek")<<endl;
	cin>>n;
	double pierwiastek;
	if(n>=0) {
		pierwiastek=sqrt(n);
		cout<<pierwiastek;
	}
	else {
		cout<<"PIERWIASTEK KWADRATOWY Z LICZBY UJEMNEJ NIE ISTNIEJE!"<<endl;
	}
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
