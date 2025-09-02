#include<iostream>
using namespace std;

int kadaneAlgo(int arr[],int n){
	
	long long sum = 0;
	long long maxi = LONG_MIN;
	
	for(int i = 0;i<n;i++){
		
		sum+= arr[i];
		
		if(sum>maxi){
			
			maxi = sum;
			
		}
		if(sum<0){
			
			sum=0;
			
		}
		
	}
	
	return maxi;
	
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
    
    cout<<kadaneAlgo(arr,n);
    
    return 0;
}

