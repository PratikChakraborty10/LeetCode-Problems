#include<bits/stdc++.h>
using namespace std;
void containsDuplicate(int arr[], int n) {
    sort(arr, arr+n);
    for(int i=0;i<n;i++) {
        if(arr[i] == arr[i+1]) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    containsDuplicate(arr, n);
}

// This code will continue to run the function all the elements of the array. 
// So, this is not a ideal approach because it consumes extra memory and time.