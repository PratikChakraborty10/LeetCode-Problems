#include<bits/stdc++.h>
using namespace std;
void RotatebyOne(int arr[], int n) {
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
        arr[n-1] = temp;
}
void Rotate(int arr[], int d, int n) {
    for (int i = 0; i < d; i++)
    RotatebyOne(arr, n);
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    Rotate(arr, k, n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}