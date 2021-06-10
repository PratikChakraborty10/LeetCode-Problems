#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x =0;
    cin>>n;
    while(n!=0){
      int r = n%10;
      x = x*10 +r;
      n/=10;
    }
    cout<<x;
    return 0;
}
