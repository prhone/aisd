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

void bubble(int *tab, int n){
	int bubble_tablica[n];
	for(int i = 0; i < n; i++){
		bubble_tablica[i] = tab[i];
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n-1; j++){
			if (bubble_tablica[j]>bubble_tablica[j+1]){
			int temp;
			temp = bubble_tablica[j];
			bubble_tablica[j] = bubble_tablica[j+1];
			bubble_tablica[j+1] = temp;
			}
		}
	}
	cout<<PL("\n\nTablica po sortowaniu bπbelkowym: ");
	for(int i = 0; i < n; i++){
		cout<<bubble_tablica[i]<<"  ";
	}
}

void insertion(int *tab, int n){
	int insertion[n];
	for(int i = 0; i < n; i++){
		insertion[i] = tab[i];
	}
	int key, j;
	for (int i = 1; i < n; i++)
	{
	   key = insertion[i];
	   j = i-1;
	   while (j >= 0 && insertion[j] > key)
	   {
	       insertion[j+1] = insertion[j];
	       j = j-1;
	   }
	   insertion[j+1] = key;
	}
	cout<<PL("\n\nTablica po sortowaniu przez wstawianie: ");
	for(int i = 0; i < n; i++){
		cout<<insertion[i]<<"  ";
	}
}

void selection(int *tab, int n){
	int selection[n];
	for(int i = 0; i < n; i++){
		selection[i] = tab[i];
	}
	int temp, j;	
	for(int i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(selection[i]>selection[j]){
				temp=selection[i];
				selection[i]=selection[j];
				selection[j]=temp;
			}
		}
	}
	cout<<PL("\n\nTablica po sortowaniu przez wymianÍ: ");
	for(int i = 0; i < n; i++){
		cout<<selection[i]<<"  ";
	}
}

main() {
	
	char znak;
	int j=0, i=0;
	int *tablica = new int[i];
	cout<<PL("Drogi uøytkowniku, jestem programem, ktÛry nadaje tablicy n-elementowe wartoúci od a do b")<<endl;
	
	do{
		
	int a=0;
	int b=0;
		
	cout<<PL("Podaj ile elementÛw ma byÊ w tablicy: ")<<endl;
	cin>>i;
	cout<<PL("Podaj liczbÍ (a) od ktÛrej mam zaczπÊ losowaÊ: ")<<endl;
	cin>>a;
	
	cout<<PL("Podaj liczbÍ (b) do ktÛrej mam losowaÊ: ")<<endl;
	cin>>b;
	
	while (b<a)	{
		cout<<PL("Liczba b musi byÊ wiÍksza od liczby a!")<<endl;
		cin>>b;
	}
	
	srand(time(0));	
	int liczba;
		
	for(j=0; j<i;){
		liczba=a+rand()%((b-a)+1);
		tablica[j]=liczba;
		j+=1;
	};
	
	cout<<"\n";
	
	do{
		for(j=0;j<i;){
		cout<<j+1<<PL(" element Twojej tablicy to: ")<<tablica[j]<<endl;
		j+=1;
		}
	}
	while(j<i);
	
	/* sortowanie bπbelkowe */
	bubble(tablica,i);
	/* sortowanie przez wstawianie */
	insertion(tablica, i);
	/* sortowanie przez wymianÍ */
	selection(tablica, i);
	
	
	cout<<"\n\n";
	cout<<PL("Czy chcesz kontynuowaÊ? [T/N]")<<endl;
	cin>>znak;
	}
	while(znak=='T' || znak=='t');
	
	
	
	
}
