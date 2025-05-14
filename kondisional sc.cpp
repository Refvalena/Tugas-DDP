#include <iostream>
using namespace std;

int main(){
   int nilai;
   cout<<" cek  predikat nilai"	<<endl;
   cout<<" nilai =";
   cin>>nilai;
   
   switch(nilai){
   	case 85 ... 100:
   		cout<<"nilai A";
   		break;
   	case 70 ... 84:
   		cout<<"nilai B";
   		break;
	case 55 ... 69:
   		cout<<"nilai C";
   		break;
	case 40 ... 54:
   		cout<<"nilai D";
   		break;
	case 0 ... 39:
   		cout<<"nilai E";
   		break;
	default:
	   	cout<<"nilai tidak valid";
   		break;
		   
		      	
   }
   
	
}
