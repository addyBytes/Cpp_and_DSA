#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp; // temporary array
    int l = low;
    int r = mid + 1;

    // Merge both halves into temp[]
    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) {
            temp.push_back(arr[l]);
            l++;
        } else {
            temp.push_back(arr[r]);
            r++;
        }
    }

    // Copy remaining elements of left half
    while (l <= mid) {
        temp.push_back(arr[l]);
        l++;
    }

    // Copy remaining elements of right half
    while (r <= high) {
        temp.push_back(arr[r]);
        r++;
    }

    // Copy temp[] back to arr[]
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}



void mergeSort(int arr[] , int low  ,int high ){
	
	if(low>=high) return;
	
	int mid =(low+high)/2;
	
	mergeSort(arr , low ,mid);
	mergeSort(arr , mid+1, high);
	
	merge(arr, low, mid, high);
	
	
	
	
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
	
	mergeSort(arr , 0 ,n-1);
	
   cout<<"The sorted array is "<<endl;
	
  	for(int i = 0 ; i<n ;i++){
		
		cout<<arr[i]<<" ";
		
	}
	
	
}
