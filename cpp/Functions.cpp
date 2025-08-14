#include <iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){
	int a ; 
	int b ;
	
	cout<<"Enter your 1st number"<<endl;
	cin>>a;
	cout<<"Enter your 2nd number"<<endl;
	cin>>b;
	
	int c = sum(a,b);
	
	cout<<"The sum is "<<c;
}
