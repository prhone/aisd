/*Program losuj�cy 100 liczb z zakresu 0 do 9 */

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


main() {
	
	char znak;
	int liczba;
	
	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry losuje 100 liczb z zakresu od 0 do 9.")<<endl;
	
	srand(time(0));
	
	int i;
	
	do{
	
	int j=0;
	int k;
		
	for(i=1; i<101; i++){
		liczba=(0+rand()%10);
		if(liczba>=5) {
			cout<<liczba<<endl;
			j=j+1;
			if(j==1) {
				k=i;
			}
		}
		else {
			cout<<liczba<<setw(2);
		}
	}
	cout<<PL("\nLiczba wi�ksza ni� 5 zosta�a wylosowana w: ")<<k<<PL(" losowaniu.")<<endl;	
	cout<<endl;
	cout<<PL("Czy chcesz kontynuowa�? [T/N]")<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
