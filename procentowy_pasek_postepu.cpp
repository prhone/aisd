/*Algorytm pokazuj�cy pasek post�pu. Ba! Nawet doda�am kolorki weeeee*/

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;



int main() {
	
	
	/* doda�am kolorki �eby by�o fajniej :) */
	system("color 2f");
	system("color 0e");
	
	int dlugosc_paska=20;
	
	char a=177;
	char b=219;
	
	/* n-enter, t-tab */
	
	cout<<"\n\n\t\t\t Loading...";
	cout<<"\n\n\n";
	
	cout<<"\t\t\t";
	
	for(int i=1;i<=dlugosc_paska;i++) {
		cout<<a;
	}
	
	/* r - tells your terminal emulator to move the cursor at the start of the line. */
	cout<<"\r";
	cout<<"\t\t\t";
	
	for(int i=1;i<=dlugosc_paska;i++) {
		
		cout<<b;
		cout<<i*5<<"%";
		Sleep(1500);
	}
	
	cout<<endl<<endl;
	system("pause");
	
	return 0;
	
	
}
