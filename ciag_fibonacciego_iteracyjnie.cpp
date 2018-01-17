/* Ci¹g Fibanacciego iteracyjnie */
#include <cstdlib>
#include <iostream>
using namespace std;

void fibonacci(int n)
{    
     long long a = 0, b = 1;
 
     for(int i=0;i<n;i++)
     {
            cout<<b<<" ";
            b += a;
            a = b-a;
     }     
}

main() {
	
	char znak;
	do {
	cout<<"Drogi uzytkowniku, jestem programem, ktory wypisuje wyrazy ciagu Fibanacciego iteracyjnie"<<endl;
	
	int n;
 
    cout<<"Ile chcesz wypisaæ wyrazów ci¹gu Fibonacciego?";
    cin>>n;
 
    fibonacci(n);
	
	
	cout<<"Czy chcesz kontynuowac? [T/N]"<<endl;
	cin>>znak;
	}
	while (znak=='T' || znak=='t');
	system("PAUSE");
	return EXIT_SUCCESS;
	}
