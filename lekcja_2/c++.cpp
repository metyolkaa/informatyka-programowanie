#include <iostream>
using namespace std;
int main(){
	//liczby caLkowite -short,int,unsigned short
	//ciąg znaków(tekst)-string
	short a,b;
	cout << "Podaj a: " <<endl;
	cin >> a;
	cout << "Podaj b: ";
	cin >>b;
	//instrukcja warunkowa -if(warunek)
	if(a>b) {
		cout << "a > b";
		
	}
	else if(a ==b){
		cout <<"a = b";
	}
	else{ //jeżeli żąden z powyższych warunków się nie sprawdza to wykonywaj else (w przeciwnym razie)
	 cout <<"a < b";
	}
	return 0;
}
//operator pryzpisania =
//operator porównania ==
// ! =różne od (a != b) -> czy 4 jest różne od 5 (tak)