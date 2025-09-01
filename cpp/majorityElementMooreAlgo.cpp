#include<iostream>
using namespace std;

int majorityElement(int arr[] ,int n){
	
	int cnt = 0;
	int ele ;
	
	for(int i = 0 ;i<n ;i++){
		
		if(cnt==0){
			
			cnt =1;
			ele = arr[i];
			
		}else if (arr[i]==ele){
			
			cnt++;
			
		}else{
			cnt--;
			
		}
		
	}
	int cnt1 = 0;
	
	for(int i = 0; i<n ;i++){
		
		if(arr[i]==ele) cnt1++;
		if(cnt1>n/2) return ele;
		
	}
	
	return -1;
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    int arr[n];  
    
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout<<majorityElement(arr,n);
    
    return 0;
}

