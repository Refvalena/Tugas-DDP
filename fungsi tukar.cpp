#include <iostream> 
using namespace std; 
 
void tukar(int a, int b); 
 
  
int main(){ 
    int a=5; 
    int b=10; 
  
    cout<<"a sebelum ditukar = "<<a<<endl; 
    cout<<"b sebelum ditukar = "<<b<<endl; 
 
    tukar(a,b);
 
    cout<<"a setelah fungsi tukar = "<<a<<endl; 
    cout<<"b setelah fungsi tukar = "<<b<<endl; 
  
    return 0; 
} 
  
void tukar(int a,int b){ 
    int temp; 
    temp=a; 
    a=b; 
    b=temp; 
    cout<<"nilai a setelah ditukar pada fungsi = "<<a<<endl; 
    cout<<"nilai b setelah ditukar  pada fungi = "<<b<<endl; 
     
} 
