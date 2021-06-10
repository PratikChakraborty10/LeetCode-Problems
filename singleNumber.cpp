#include<bits/stdc++.h>
using namespace std;
int deleteElement(int arr[], int n, int x) {
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
if (i < n) {
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
return n;
}
int singleNumber(int *arr, int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    sort(arr, arr + n);
    for(int i=0;i<n;i++) {
        if(arr[i]==arr[i+1]) {
            deleteElement(arr, n, i);
        }
    }
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    return arrSize;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << singleNumber(arr, n) << endl;
    return 0;
}