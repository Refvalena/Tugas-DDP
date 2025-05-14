#include <iostream>
using namespace std;

int main(){
	int angka;
	
	cout<<"masukan angka antara 1 dan 10 : "<<endl;
	cin>>angka;
	
	if (angka >= 1 && angka <= 10){
		cout<<"angka adalah valid";
	}
	
	else {
		cout<<"angka tidak  valid";
	}
}
