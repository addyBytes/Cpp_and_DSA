#include <iostream>
using namespace std;


int fnSort(int arr[],int low, int high){
	
	int pivot = arr[low];
	int i = low;
	int j = high;
	
	while(i<j){
		
		while(arr[i]<=pivot&&i<=high-1){
			i++;
		}
		while(arr[j]>pivot&&j>=low+1){
			j--;
		}
		if(i<j){
			int temp = arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
		}
		
	}
	int temp = arr[low];
			arr[low]=arr[j];
			arr[j]=temp;
		
	return j;
}


void quickSort(int arr[],int low,int high){
	if(low<high){
		int pIndex = fnSort(arr , low ,high);
		quickSort(arr,low,pIndex-1);
		quickSort(arr,pIndex+1,high);
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
	
	quickSort(arr , 0 ,n-1);
	
   cout<<"The sorted array is "<<endl;
	
  	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<" ";
		
	}
	
	
}
