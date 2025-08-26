#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int num){
	
	for(int i=0;i<n;i++){
		
		if(arr[i] == num){
			
			return i;
			
		}
		
	}
	return -1;
	
}




int main(){
	int num; //number to be found
	int n;
	int arr[n];
	
	cout<<"Enter the size of the array ";
	cin>>n;
	
	cout<<"Enter the elements of array "<<endl;
	
	for(int i=0 ;i<n;i++){
		
		cin>>arr[i];
		
	}
	
	cout<<"The array is "<<endl;
	
	for(int i=0 ;i<n;i++){
		
		cout<<arr[i];
		
	}
	
	cout<<endl;
	
	cout<<"Enter number to be found "<<endl;
	
	cin>>num;
	
	
	int store = linearSearch(arr, n ,num);
	
	if(store ==-1){
		
		cout<<"Number is not in the array ";
		
	}else{
		
		cout<<"the number is at the "<<store<<" index";
		
	}
	
	
	
	
	
	
	
	
	
	
	
}
