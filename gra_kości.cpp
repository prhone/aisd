/* Program to gra ko�ci */
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
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
	
	cout<<PL("LET'S PLAY A GAME! GAHAHAHAHAHA")<<endl;
	/* robi przerw� pomi�dzy coutami
	getch();
	*/
	int ile_rzutow=1;
	int suma_oczek;
	int wylosowana_liczba=0;
	char znak;
	int ktory_raz=1;
	do {
		
	cout<<PL("Iloma ko��mi mam rzuci�? Maksymalnie trzema.")<<endl;
	do{
		ile_rzutow = getche()-48;
		cout<<endl;
	}
	while(ile_rzutow < 0 || ile_rzutow > 3);
	//cin>>ile_rzutow;

	srand(time(0));
	 	
		
		for (int i=0; i<ile_rzutow; i++)
		{	
			
			wylosowana_liczba=(1+rand()%6);
			suma_oczek=suma_oczek+wylosowana_liczba;
			
		}
	int zgaduj_rzuty;
	
	do {
	
	if(ile_rzutow==1) {
		cout<<PL("Zgadnij jaka jest liczba oczek z ")<<ile_rzutow<<PL(" rzutu.")<<endl;
	}
	else {
		cout<<PL("Zgadnij jaka jest liczba oczek z ")<<ile_rzutow<<PL(" rzut�w.")<<endl;
	}
	cin>>zgaduj_rzuty;
	
	if(zgaduj_rzuty==suma_oczek) {
		cout<<PL("Uda�o Ci si� odgadn�� za: ")<<ktory_raz<<" razem, a liczba oczek to: "<<suma_oczek<<"."<<endl;
	}
	else {
		cout<<PL("Pr�buj dalej.")<<endl;
		ktory_raz=ktory_raz+1;
	}
	
	}
	while(zgaduj_rzuty!=suma_oczek);
	
	suma_oczek=0;
	wylosowana_liczba=0;	
	
	cout<<PL("Czy chcesz kontynuowa�? [T/N]")<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
