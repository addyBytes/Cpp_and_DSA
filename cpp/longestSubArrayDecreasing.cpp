#include<iostream>
#include<vector>
using namespace std;

int longestSubarray(int arr[] , int n , int k){
	
	int left = 0;
	int right = 0;
	long long sum = arr[0];
	int maxLen = 0;
	vector<int> lengths;  // store valid lengths
	
	while(right<n){
		
		while(left<=right && sum>k){
			sum -= arr[left];
			left++;
		}
		if(sum==k){
			int len = right-left+1;
			lengths.push_back(len); // store each valid length
			maxLen = max(maxLen , len);
		}
		right++;
		if(right<n) sum +=arr[right];
	}
	
	// print in decreasing order
	for(int i = lengths.size()-1; i >= 0; i--){
		cout << lengths[i] << " ";
	}
	cout << endl;
	
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

    cout << "Max Length: " << longestSubarray(arr, n, k);

    return 0;
}

