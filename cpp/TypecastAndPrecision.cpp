//Typecaste and precision

#include <iostream>
#include <cstdio> // For printf
#include <iomanip> //for precision
using namespace std;

int main(){
	//type casting
	float a=67.89;
	cout<<"the float was "<<a<<"the typecasted int is "<<(int) a<<endl;
	
	//precison (upto 2 decimal)
	
	float b = 56.74893;
	
	cout<<"the precision is "<<fixed<<setprecision(2)<<b<<endl;
	//OR
	float c= 78.73246;
	printf("The precision is %.2f ",c);
	
	return 0;
}
