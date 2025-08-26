#include<iostream>
#include <algorithm>

using namespace std;



void recursionReverseArr(int i , int arr[], int j){
	
	if(i>=j/2) return;
	swap(arr[i] , arr[j-i-1]);
	recursionReverseArr(i+1 , arr ,j);
	
	
}


void leftRotateByKplaces(int arr[] , int n ,int k ){
	
	reverse(arr, arr+k);
	reverse(arr+k , arr+n);
	reverse(arr, arr+n);
	
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
	
	
	cout<<"Enter the no pf place to be rotated ";
	cin>>k;
	
	leftRotateByKplaces(arr ,n, k);
	
	cout<<"The left rotated array by "<<k<<" place is "<<endl;
	
	for(int i=0 ;i<n;i++){
		
		cout<<arr[i];
		
	}
	
	
	
}
