#include<iostream>
using namespace std;

int insertionSort(int arr[] , int n){
	
	for(int i=0 ; i<=n-1 ; i++){
		
		int j = i;
	    while(j>0 && arr[j-1]>arr[j]){
	    	
	    	int temp = arr[j-1];
	    	arr[j-1] = arr[j];
	    	arr[j] = temp ;
	    	
	    	j--;
	    	
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
	
	insertionSort(arr , n);
	
   cout<<"The sorted array is "<<endl;
	
  	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<" ";
		
	}
	
	
}
