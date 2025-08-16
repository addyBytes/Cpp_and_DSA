#include <iostream>

using namespace std;

int main(){
	
	int a= 43;
	int * ptra; //pointer declared
	
	ptra =&a; //pointer reffered to make sure to use & for address
	
	cout<<ptra<<endl; //gives address
	cout<<*ptra ; //gives value at that address
	
	
	return 0;
}
