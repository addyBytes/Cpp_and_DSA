#include<iostream>
using namespace std;

int PrintNamerecursion(int n){
	int count = n; 
	
	
	
	if(count==6){
		cout<<"recursion is done";
		
	}else{
		cout<<"Aditya"<<endl;
	  	count++;
		PrintNamerecursion(count);
	}
		
	
	
	
}


int PrintNrecursion(int n){
	int i= 200 ;

	int count = n; 
	
	
	
	if(count==i){
		cout<<"recursion is done";
		
	}else{
		cout<<count<<endl;
	  	count++;
		PrintNrecursion(count);
	}
		
	
	
	
}


int PrintBackwardNrecursion(int n){
	int i= 0 ;

	int count = n; 
	
	
	
	if(count==i){
		cout<<"recursion is done";
		
	}else{
		cout<<count<<endl;
	  	count--;
		PrintBackwardNrecursion(count);
	}
		
	
	
	
}





int main(){
	
	int n = 100;
	PrintBackwardNrecursion(n);
	
	
}
