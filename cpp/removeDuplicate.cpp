#include<iostream>
using namespace std;

int removeDuplicate(int arr[] , int n){
	
	int i = 0;
	
	for(int j = 1;j<n;j++){
		
		if(arr[j] !=arr[i]){
			
			arr[i+1] = arr[j];
			i++;
			
		}
		
	}
	
	return i+1;
	
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
	
	cout<<removeDuplicate(arr,n);
	
	
}
