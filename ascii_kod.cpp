/*To jest program, ktory wyswietla tablice kodow ASCII*/

#include <cstdlib>
#include <iostream>
using namespace std;

void banner() {
	cout<<"========================================\n";
	cout<<"  Program wypisujacy tabele kodow ASCII \n";
	cout<<"           CDV(C)2017 student           \n";
	cout<<"              Paulina Rhone             \n";
	cout<<"========================================\n\n";
}


int main ()
{	

	banner();
	
	int a;
    for(a=0;a<256;++a)
    {
        cout<<a<<"="<<(char)a<<" ";
    }
    
	system("PAUSE");
	return EXIT_SUCCESS;
	}
