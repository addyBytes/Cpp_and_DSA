#include<iostream>
using namespace std;




void bubbleSort(int arr[], int n){
	
	for(int i =n-1 ; i>=1 ;i--){
		
		for(int j =0 ; j<=i-1 ; j++){
			
			if(arr[j]>arr[j+1]){
				//swap
				int temp = arr[j+1];
             	arr[j+1] = arr[j];
       			arr[j]=temp;
				
			}
			
		}
		
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
		
		cout<<arr[i]<<" ";
		
	}
	
	bubbleSort(arr , n);
	
   cout<<"The sorted array is "<<endl;
	
  	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<" ";
		
	}
	
	
}
