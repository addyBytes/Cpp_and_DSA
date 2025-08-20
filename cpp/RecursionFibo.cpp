#include<iostream>
using namespace std;

int recursionFibonacci(int n){
	
	if(n<=1) return n;
	return recursionFibonacci(n-1)+recursionFibonacci(n-2);
	
	
}

int main(){
	
	int n;
	cout<<"Enter the number ";
	cin>>n;
	cout<<recursionFibonacci(n);
	
}
