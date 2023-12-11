#include<iostream>
using namespace std;
int main(){
	char tablica[100];
	int p;
	int k;
	cout <<"Podaj imie i nazwisko: "<<endl;
	cin.getline(tablica,100);
	cout <<"Twoje dane osobowe:"<<tablica<<endl;
	for(int i=0;i<100;i++){
		if(tablica[i]==' ') {
			p=i;
		}
		if(tablica[i]=='\0') {
			k=i;
			break;
		}
		
	}
	cout << "Pozycja spacji:"<<p<<endl;
	cout<<"Pozycja konca:"<<k<<endl;
	return 0;
}
