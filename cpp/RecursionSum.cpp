#include<iostream>
using namespace std;

//int recursionSum(int n , int sum){
//
//	if(n<1){
//		
//		cout<< "the sum is "<<sum;
//		return sum;
//	}
//	
//	recursionSum(n-1 , sum+n);
//	
//}


//int recursionSumSimple(int n ){
//
//	if(n==0){
//		
//		return 0;
//	
//	}else{
//		
//		return n + recursionSumSimple(n-1);
//	
//		
//	}
//	
//
//
//	
//}


///FACTORIAL

int Factorial(int n ){

	if(n==0){
		
		return 1;
	
	}else{
		
		return n * Factorial(n-1);
	
		
	}
	


	
}

int main(){
	int i;
	int n ;
	cout<<"enter the value of N ";
    cin>>n;
	
	cout<<Factorial(n);
	
	
	
}
