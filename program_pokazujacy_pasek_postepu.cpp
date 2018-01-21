#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){
	
	char znak;
	
	do{
		
		
		char a=177;
		char b=219;
		int i;
		//t tablica[20]=a;
		//ut<<tablica[20];
		for (i=0;i<25;i++) 
		{	
			cout<<a;
			Sleep(500);
			
			for(int j=0; j<i;j++)
		{
			cout<<b;
			Sleep(1000);
		}
		}
	
	cout<<"Czy chcesz kontynuowac?[T/N]"<<endl;
	cin>>znak;	
	}
	while(znak=='T'||znak=='t');
}
