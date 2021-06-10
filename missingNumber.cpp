#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[], int n) {
    sort(a, a+n);
    int i, total=1;
    for ( i = 2; i<= (n+1); i++) {
        total+=i;
        total -= a[i-2];
    }
    return total;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << missingNumber(arr, n);
}