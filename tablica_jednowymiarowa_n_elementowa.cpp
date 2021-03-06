/*Tablica jednowymiarowa n-elementowa*/

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <iomanip>
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
	
	char znak;

	cout<<PL("Drogi u�ytkowniku, jestem programem, kt�ry nadaje tablicy n-elementowe warto�ci od a do b")<<endl;
	
	do{
		
	int i=0,j=0, k=0;
	int a=0;
	int b=0;
	int suma=0;
	float srednia=0;
	int suma_przez_3=0;
	float srednia_przez_3=0;
		
	cout<<PL("Podaj ile element�w ma by� w tablicy: ")<<endl;
	cin>>i;
	cout<<PL("Podaj liczb� (a) od kt�rej mam zacz�� losowa�: ")<<endl;
	cin>>a;
	
	cout<<PL("Podaj liczb� (b) do kt�rej mam losowa�: ")<<endl;
	cin>>b;
	
	while (b<a)	{
		cout<<PL("Liczba b musi by� wi�ksza od liczby a!")<<endl;
		cin>>b;
	}
	
	srand(time(0));	
	int liczba;	
	int *tablica = new int[i];
	int *tablica_przez_3 = new int[k];
		
	for(j=0; j<i;){
		liczba=a+rand()%((b-a)+1);
		tablica[j]=liczba;
		suma+=liczba;
		if(liczba%3==0) {
			tablica_przez_3[k]=liczba;
			cout<<k+1<<" element tablicy podzielny przez 3 to: "<<tablica_przez_3[k]<<endl;
			suma_przez_3+=tablica_przez_3[k];
			k+=1;
		}
		j+=1;
	};
	
	cout<<"\n";
	
	srednia_przez_3=(float)suma_przez_3/k;
	
	cout<<PL("Suma element�w podzielnych przez 3 to: ")<<suma_przez_3<<endl;
	cout<<PL("�rednia element�w podzielnych przez 3 to: ")<<srednia_przez_3<<endl;
	
	cout<<"\n\n";
	
	do{
	for(j=0;j<i;){
		cout<<j+1<<PL(" element Twojej tablicy to: ")<<tablica[j]<<endl;
		j+=1;
	}
	}
	while(j<i);
	cout<<endl;
	
	srednia=(float)suma/i;
	
	int max=tablica[0];
	
	for(j=0; j<i; j++){
	
		if(max<tablica[j]) {
			max=tablica[j];
		}
	
	}
	
	int min=tablica[0];
	
	for(j=0; j<i; j++){
		
		if(min>tablica[j]) {
			min=tablica[j];
		}
		
	}
	
	
	cout<<PL("Suma element�w tablicy: ")<<suma<<endl;
	cout<<PL("�rednia arytmetyczna element�w tablicy: ")<<srednia<<endl;
	cout<<PL("Najwi�ksza warto�� w tablicy: ")<<max<<endl;
	cout<<PL("Najmniejsza warto�� w tablicy: ")<<min<<endl;
	
	cout<<endl;
	
	
	cout<<"\n\n";
	cout<<PL("Czy chcesz kontynuowa�? [T/N]")<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
