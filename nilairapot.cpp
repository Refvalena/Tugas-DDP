#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"nilai ujian= ";
	cin>>nilai;
	
	
	if (nilai > 100) 
        cout << "Invalid"<<endl;
	else if (nilai>=85)
	    cout<<"nilai A";
	else if (nilai>=70)
	    cout<<"nilai B";
	else if (nilai>=55)
	    cout<<"nilai C";
	else if (nilai>=40)
	    cout<<"nilai D";
	else 
	    cout<<"nilai E";
	
	

return 0;
	
	
}
