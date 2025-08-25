#include<iostream>
using namespace std;

int sortedArr(int arr[] , int n){
	
	for(int i =1 ;i<n ; i++){
		
		if(arr[i]>=arr[i-1]){
			
		}else return false;
		
		
	}
	return true;
	
}

int main(){
	
	int n;
	int arr[n];
	cout<<"Enter the size of the array ";
	cin>>n;
	
	cout<<"Enter the elements of the array ";
	
	for(int i = 0 ;i<n ; i++){
		
		cin>>arr[i];
		
		
	}
	
	cout<<"The array is ";
	
	for(int i = 0 ;i<n ; i++){
		
		cout<<arr[i]<<" ";
	
		
	}
	
	cout<<endl;
	
	cout<<sortedArr(arr,n);
	
	
}
