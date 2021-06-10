#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[]) {
    int i,index = 0,m;
    int index_first = 0,index_second = 0;
    m = size1 + size2;
    while(index_first < size1 && index_second < size2) {
        if(arr1[index_first] < arr2[index_second]) {
            ans[index] = arr1[index_first];
            index_first++;
        }
        else {
            ans[index] = arr2[index_second];
            index_second++;
        }
        index++;
    }
    if(index_first == size1) {
        while(index_second < size2) {
            ans[index] = arr2[index_second];
            index_second++;
            index++;
        }
    } else if(index_second == size2) {
        while(index_first < size1) {
            ans[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }    
}
int main() {
    int size1;
		cin >> size1;
		int *arr1 = new int[size1];
        for (int i = 0; i < size1; i++) {
			cin >> arr1[i];
		}
        int size2;
		cin >> size2;
        int *arr2 = new int[size2];
        for (int i = 0; i < size2; i++) {
			cin >> arr2[i];
		}
        int *ans = new int[size1 + size2];
        merge(arr1, size1, arr2, size2, ans);
        for (int i = 0; i < size1 + size2; i++) {
			cout << ans[i] << " ";
		}
        cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
}
