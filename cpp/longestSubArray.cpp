#include<iostream>
using namespace std;

int longestSubarray(int arr[] , int n , int k){
	
	int left = 0;
	int right = 0;
	long long sum = arr[0];
	int maxLen = 0;
	
	
	while(right<n){
		
		while(left<=right && sum>k){
			
			sum -= arr[left];
			left++;
			
		}
		if(sum==k){
			
			maxLen = max(maxLen , right-left+1);
			
		}
		right++;
		if(right<n) sum +=arr[right];
	}
	
	return maxLen;
	
}




int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    int arr[n];  
    
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int k;
    cout<<"Enter the sum ";
    cin>>k;

    cout << longestSubarray(arr, n, k);

    return 0;
}

