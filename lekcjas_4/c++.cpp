#include <iostream>
using namespace std;

int main(){
	//zadanie1
	for(int i = 1; i <=2; i++){ //zmienna lokalna <istnieje tylko w petli
	cout <<endl;
	for(int j = 0; j <11; j++){ //zmienna lokalna <istnieje tylko w petli
	int k = i *j;
	cout << i<< "*" <<j << "="<<k<< endl;
	
	
}
}
//zadanie2
int w,h;
cout << "Podaj Wysokosc :" << endl;
cin >> w;
cout << "Podaj Szerokosc :" << endl;
cin >> h;
for(int i = 0; i < w; i++){ //zmienna lokalna <istnieje tylko w petli
	for(int j = 0; j < h; j++){ //zmienna lokalna <istnieje tylko w petli
	cout <<""<< "*";
}
cout <<endl;
}
	cout <<endl;
	system("pause");
}       