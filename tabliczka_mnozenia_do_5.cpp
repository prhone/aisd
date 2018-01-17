/*To jest program, ktory wyswietla tabliczke mnozenia do 5*/

//http://www.cplusplus.com/reference/iomanip/setw/ #include <iomanip>

#include <cstdlib>
#include <iostream>
#include <iomanip>
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

int main ()
{	
	cout<<PL("TABLICZKA MNOØENIA DO 5CIU: ")<<endl;
   	int i, j;
   	cout<<setw(3);
   	cout<<"|";
   	for (i=1 ; i<=5;i++)
   	cout<<setw(3)<< i;
   	cout<< "\n===================\n";
   	for (i=1; i<=5;i++)
   	{
      cout<<i<<setw(2)<<"|" ;
      for(j=1; j<=5; j++)
         cout <<setw(3)<< i*j;
         cout << "\n  \n";
  	}
    
	system("PAUSE");
	return EXIT_SUCCESS;
	}
