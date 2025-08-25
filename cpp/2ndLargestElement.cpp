#include<iostream>
using namespace std;

int secondLargestElement(int arr[] , int n){
	
	int largest = arr[0];
	
	for(int i =0 ; i<n ; i++){
		
		if(arr[i]>largest){
			
			largest = arr[i];
			
		}
		
	}
	
	int secondLargest = -1;
        for(int i = 0 ; i<n ;i++){
        	
        	if(arr[i]>secondLargest && arr[i]!=largest){
        		
        		secondLargest = arr[i];
        		
			}
        	
		}
		
		return secondLargest ;
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
	
	cout<<"the largest element is "<<secondLargestElement(arr,n);
	
	
}
