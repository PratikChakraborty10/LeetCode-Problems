#include<bits/stdc++.h>
using namespace std;
int maxProfitUtil(int prices[], int start, int n) {
    if (start >= n) {
        return 0;
    }
    int max = 0;
    for (int i = start; i < n; i++) {
        int maxprofit = 0;
        for (int j = i + 1; j < n; j++) {
            if (prices[i] < prices[j]) {
                int profit = maxProfitUtil(prices, j + 1, n) + prices[j] - prices[i];
                if (profit > maxprofit) {
                    maxprofit = profit;
                }
            }
        }
        if (maxprofit > max) {
            max = maxprofit;
        }
    }
    return max;
}
int maxProfit(int prices[], int n) {
    return maxProfitUtil(prices, 0, n);
}
int main() {
    int n;
    cin >> n;
    int *prices = new int[n];
    for(int i=0;i<n;i++) {
        cin >> prices[i];
    }
    int ans = maxProfit(prices, n);
    cout << ans << endl;
}