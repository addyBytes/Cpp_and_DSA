#include<iostream>
using namespace std;


//rev array using recursion
//void recursionReverseArr(int i , int arr[], int j){
//	
//	if(i>=j/2) return;
//	swap(arr[i] , arr[j-i-1]);
//	recursionReverseArr(i+1 , arr ,j);
//	
//	
//}

bool stringPalindrome(int i ,string &s){
	if(i>=s.size()/2) return true;
	if(s[i]!=s[s.size()-i-1]) return false;
	
	return stringPalindrome(i+1 , s);
	
	
	
}

int main (){
//	int j;
//	cout<<"Enter the array size ";
//	cin>>j;
//	
//	int arr[j];
////	cout<<"Enter the elements of array "<<endl;
//	for(int i=0;i<j;i++){
//		
//		cin>>arr[i];
//		
//	}
////	for(int i=0;i<j;i++){
////		
////		cout<<arr[i]<<endl;
////		
////	}
//	
//	recursionReverseArr(0,arr,j);
//	
//	for(int i=0;i<j;i++){
//		
//		cout<<arr[i];
//		
//	}

string s ;
cin>>s;

if(stringPalindrome(0,s)==0){
	
	cout<<"false string is not palindrome";
	
}else{
	
	cout<<"true string is palindrome";
	
}



	
 return 0;
	
	
	
}
