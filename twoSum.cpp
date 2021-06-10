#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[], int n, int sum) {
     unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int temp = sum - arr[i];
        if (s.find(temp) != s.end())
        cout << arr[i] << " " << temp << endl;
 
        s.insert(arr[i]);
    }
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    twoSum(arr, n, sum);
    return 0;
}