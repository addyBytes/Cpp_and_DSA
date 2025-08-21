#include<iostream>
using namespace std;

////finding no of time appears in array(lengthy method)
//
//int arrAppear(int n , int arr[]){
//	
//	int count  = 0;
//	
//	for(int i = 0; i<n ;i++){
//		
//		if(arr[i]==n){
//			
//			count++;
//			
//		}
//		
//	}
//	
//	return count;
//	
//}


int main(){
	int k;
	cout<<"Enter the no. of elements in array " ;
	cin>>k;
	int arr[k];
	
	cout<<"enter the elements of array ";
	
	
	for(int i = 0 ; i<k ;i++){
		
		cin>>arr[i];
		
	} 
	
	int hash[13] = {0};
	
	for(int i = 0 ; i<k ;i++){
		
		hash[arr[i]]+=1;
		
	} 
	
	
	

	for(int i = 0 ; i<k ;i++){
			
		int number = arr[i];
	
		
		cout<<number<<" occures "<<hash[number]<<" times"<<endl;
		
		arr[i]++;
		
	} 
	
	
	return 0;
	
	
	
	
}
