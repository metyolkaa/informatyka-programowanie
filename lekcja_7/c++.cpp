#include <iostream>
using namespace std;

int main(){
	int liczba[5];
	cout <<"Wprowadz 5 liczb: "<<endl;
for(int i=0;i<5;i++){
	cin>> liczba[i];
}
for(int i=4;i>=0;i--){
cout << liczba[i] <<" ";
}

	return 0;
}