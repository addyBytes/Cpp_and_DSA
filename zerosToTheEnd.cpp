#include<iostream>
#include <algorithm>

using namespace std;






void zeroToTheEnd(int arr[] , int n  ){
	
	int j =-1;
	for(int i =0 ; i<n ; i++){
		
		if(arr[i]==0){
			
			j=i;
			break;
			
		}
		
	}
	
	for(int i = j+1 ;i<n ;i++){
		
		if(arr[i]!=0){
			swap(arr[i] , arr[j]);
			j++;
		}
		
	}
	
}



int main(){
	int k; //no. of place to be rotated
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
	
	
	
	zeroToTheEnd(arr ,n);
	
	
	for(int i=0 ;i<n;i++){
		
		cout<<arr[i];
		
	}
	
	
	
}
