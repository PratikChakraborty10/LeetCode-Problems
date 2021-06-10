#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[] = "loveleetcode";
    pair<int, int> arr[256];
    for(int i=0; s[i]; i++){
        (arr[s[i]].first)++;
        arr[s[i]].second = i;
    }
    int res = INT_MAX;
    for(int i=0; i<256; i++){
        if(arr[i].first == 1)
            res = min(res,arr[i].second);
    }
    if(res == INT_MAX)
        cout<<"-1";
    else    
        cout<<res;
    return 0;
}
