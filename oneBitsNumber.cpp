#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n= 00000000000000000000000000001011, s=0;
    while(n!=0){
        s += (n%2)&1;
        n>>=1;
    }
    cout<<s;
    return 0;
}
