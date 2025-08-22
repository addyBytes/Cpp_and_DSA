#include<iostream>
using namespace std;



void selectionSort(int arr[] , int n){
	
	for(int i = 0 ; i<=n-2 ; i++){
		int min = i;
		for(int j=i ; j<=n-1 ;j++){
			
			if(arr[j] < arr[min]){
				
				min = j;
			}
			
		}		
	 
	 
       int temp = arr[min];
       arr[min] = arr[i];
       arr[i]=temp;
	
		
	}
}

int main(){
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int arr[n];
	int arr1[n];
	
	cout<<"Enter the elements of array"<<endl;
	
	for(int i = 0 ; i<n ;i++){
		
		cin>>arr[i];
		
	}
	
	cout<<"The array is "<<endl;
	
	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<", ";
		
	}
	
	selectionSort(arr , n);
	
cout<<"The sorted array is "<<endl;
	
  	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<", ";
		
	}
	
	
}
