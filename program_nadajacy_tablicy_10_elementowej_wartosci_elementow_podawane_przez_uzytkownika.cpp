/*Program nadaj�cy tablicy 10cio elementowej warto�ci podawane przez u�ytkownika*/

#include <cstdlib>
#include <iostream>
#include <conio.h>
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

	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry nadaje tablicy 10cio elementowej warto�ci, kt�re mi podasz")<<endl;
	
	
	int i=10;
	
	do{
	int *tabela = new int[i];	
	for(i=0; i<10;){
		cout<<PL("Podaj ")<<i+1<<PL(" liczb� do tabeli.")<<endl;
		cin>>tabela[i];
		cin.clear();
		cin.sync();
		i+=1;
	};
	
	do{
	for(i=0;i<10;i++){
		cout<<i+1<<PL(" element Twojej tabeli to: ")<<tabela[i]<<endl;
	}
	}
	while(i<10);
	cout<<endl;
	cout<<PL("Czy chcesz kontynuowa�? [T/N]")<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
