#include<iostream>
using namespace std;


void leftRotate(int arr[] , int n){
	
	int temp = arr[0];
	
	for(int i = 1 ;i<n;i++){
		
		arr[i-1]  =arr[i] ;
		
		
	}
	
	arr[n-1] = temp ;
	
	
}


int main(){
	
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
		for(int i=0 ;i<n;i++){
		
		cout<<arr[i];
		
	}
	
	leftRotate(arr , n);
	
	cout<<"The left rotated array is "<<endl;
	
	for(int i=0 ;i<n;i++){
		
		cout<<arr[i];
		
	}
	
	
	
}
