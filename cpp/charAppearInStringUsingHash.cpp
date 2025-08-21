#include<iostream>
#include<string>
using namespace std;


//for lowercase only 

int main(){
	
	string s;
	cin>>s;

//precompute	
	int hash[26] = {0};
  	for(int i=0;i<s.size();i++){
  		
  		hash[s[i]-'a']++;
  		
	}
	
	char c;
	cin>> c;
	
	cout<<"the character "<<c<<" apperas "<<hash[c-'a']<<" times in the string ";
	
	return 0;
	
//reduction




	
}
