#include<bits/stdc++.h>
using namespace std;

//print individual digit in revese
//int reverse(int n){
//	int count = (int)(log10(n)+1);
//	int revNum =0;
//	do{
//		int lastDigit = n%10;
//		n=n/10;
//		revNum=(revNum*10)+lastDigit;
//	
//	}while(n>0);
//	
//	cout<<" count is "<<count<<"reverse number is "<<revNum;
//}


//int palindrome(int n){
//	int i = n;
////	int count = (int)(log10(n)+1);
//	int revNum =0;
//	do{
//		int lastDigit = n%10;
//		n=n/10;
//		revNum=(revNum*10)+lastDigit;
//	
//	}while(n>0);
//	
//	if(i==revNum){
//		cout<<"true";
//	}else{
//		cout<<"false";
//	}
//}

//int armstrong(int n){
//	int i = n;
//	int sum = 0;
////	int count = (int)(log10(n)+1);
//	int revNum =0;
//	do{
//		int lastDigit = n%10;
//		sum = sum + (lastDigit*lastDigit*lastDigit);
//		n=n/10;
////		revNum=(revNum*10)+lastDigit;
//	
//	}while(n>0);
//	
//	if(i==sum){
//		cout<<"true its armstrong";
//	}else{
//		cout<<"false";
//	}
//}

//int divisors(int n){
//	
//	for(int i = 1;i<=n;i++){
//		
//		if(n%i==0){
//			
//			cout<<i<<endl;
//			
//		}
//		
//	}
////}
//
//int prime(int n){
//	    int i =n;
//		int count = 0;
//	
//	for(int i = 1;i<=n;i++){
//		
//	
//		
//		if(n%i==0){
//			
//			count++;
//			
//		}
//		
//	};
//	
//	if(count=2 && i==1){
//		
//		cout<<"neither prime nor composite";
//		
//	}else if(count=2){
//   	
//   	cout<<"its a prime number";
//   	
//   }else{
//   	
//   	cout<<"not a prime number";
//   	
//   }
//
//}


void gcd(int n1 ,int n2){
	
	int gcd=0;
	
	for(int i=1;i<=min(n1,n2);i++){
		
		if(n1%i==0 && n2%i==0){
			
		 gcd = i;
			
		}
		
	}
	
    cout<<"the gcd of "<<n1<<" and "<<n2<<" is "<<gcd;
}


int main(){
	int n1;
	int n2;
	cin>>n1>>n2;
	gcd(n1,n2);
}
