#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

//THIS CODE WORKS IDK WHY ITS GIVING ERROR IN DEV C++ , ELSE IT WORKS FINE EVERYWHERE

int main(){
	string s;
	cin>>s;
 
	//precompute
    map<char ,int> mpp;
	
	for(int i = 0 ; i<s.size() ;i++){
		
		mpp[s[i]]++;
		
	} 
	
	
	for(auto it : mpp){
		
		cout<<it.first<<it.second;
		
	}
	
	
//
//	for(int i = 0 ; i<k ;i++){
//			
//		int number = arr[i];
//	
//		
//		cout<<number<<" occures "<<mpp[number]<<" times"<<endl;
//		
//		arr[i]++;
//		
//	} 
//	
	
	return 0;
	
	
	
	
}
