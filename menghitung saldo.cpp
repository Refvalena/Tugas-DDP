#include <iostream>
using namespace std;

int main(){
	long long int nim = 2400018113;
	string nama = "refva lena";
	int saldoAwal = 5000;
	int pemasukan = 9000;
	int saldoAkhir;
	
	cout<<"NIM\t\t:"<<nim<<endl;
	cout<<"Nama\t\t:"<<nama<<endl;
	cout<<"Saldoku\t\t:"<< saldoAwal<<endl;
	cout<<"Pemasukan\t:"<< pemasukan<<endl;
	
	saldoAkhir = saldoAwal + pemasukan  ;
	
	cout<<"Saldo Akhirku\t:"<<saldoAkhir<<endl;
	
	return 0;
	
}
