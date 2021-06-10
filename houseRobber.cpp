#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[] = {1,2,3,1}, sum=0;
    int n = sizeof(ar)/sizeof(ar[0]);
    for(int i=0; i<n; i+=2){
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}
