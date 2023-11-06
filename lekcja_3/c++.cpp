#include <iostream>
using namespace std;
int main(){
/*
Inkrementacja
i=i+1
i +=1
1++
Dekrementacja
i=i+1
i -=1
1--
*/	
//for(wartośćPoczAtkowa; warunekkonczacy; krok)
for(int i = 0; i <5; i++){ //zmienna lokalna <istnieje tylko w petli
	cout << "Literacja numer: " << i <<endl;
}
for(int i = 0; i <5; i++){ //zmienna lokalna <istnieje tylko w petli
	for(int j = 0; j <5; j++){ //zmienna lokalna <istnieje tylko w petli
	cout << " " << i << j<< endl;
}
}
int w;
int h;

cout << "Wysokosc :" << endl;
cin >> w;
cout << "Szerokosc :" << endl;
cin >> h;
for(int i = 0; i < w; i++){ //zmienna lokalna <istnieje tylko w petli
	for(int j = 0; j < h; j++){ //zmienna lokalna <istnieje tylko w petli
	cout << " " << i << j;
}
cout << endl;
}
	cout << endl;
	system("pause");
}
