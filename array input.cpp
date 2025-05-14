#include <iostream>
using namespace std;

 int main (){
 int a[5], total; 
 int jumlah[5]; 
  
 cout<<"Masukkan nilai pada array"<<endl; 
 for(int i=0;i<5;i++) 
 { 
  cout<<"Nilai indeks ["<<i<<"] = "; 
  cin>>a[i]; 
 } 
 cout<<endl; 
 for(int i=0;i<5;i++) 
 { 
  cout<<"Nilai indeks ["<<i<<"] adalah "<<a[i]<<endl; 
  total+=a[i]; 
 } 
 cout<<"Jumlah nilai elemen pada array a adalah: "<<total; 
 return 0; 
} 
