#include<iostream>
#include<map>
using namespace std;

bool twoSum(int arr[], int n, int k) {   
    map<int,int> mpp;   
    
    for(int i = 0; i < n; i++) {
        int a = arr[i];
        int more = k - a;
        
        if(mpp.find(more) != mpp.end()) {   
            cout << "Pair found: " << more << " + " << a << " = " << k << endl;
            return true;
        }
        mpp[a] = i;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    int arr[n];  
    
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int k;
    cout << "Enter the target: ";
    cin >> k;

    if(twoSum(arr, n, k))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

