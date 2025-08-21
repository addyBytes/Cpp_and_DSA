#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//THIS CODE WORKS IDK WHY ITS GIVING ERROR IN DEV C++ , ELSE IT WORKS FINE EVERYWHERE

int main(){
	int k;
	cout<<"Enter the no. of elements in array " ;
	cin>>k;
	int arr[k];
	
	cout<<"enter the elements of array ";
	
	
	for(int i = 0 ; i<k ;i++){
		
		cin>>arr[i];
		
	} 
	//precompute
    map<int ,int> mpp;
	
	for(int i = 0 ; i<k ;i++){
		
		mpp[arr[i]]++;
		
	} 
	
	
	for(auto it : mpp){
		
		cout<<it.first<<" occurs "<<it.second<<" times"<<endl;
		
	}
	

	
	return 0;
	
	
	
	
}
