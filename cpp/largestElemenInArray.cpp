#include<iostream>
using namespace std;

int largestElement(int arr[] , int n){
	
	int largest = arr[0];
	
	for(int i =0 ; i<n ; i++){
		
		if(arr[i]>largest){
			
			largest = arr[i];
			
		}
		
	}
        return largest;	
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
	
	cout<<"the largest element is "<<largestElement(arr,n);
	
	
}
