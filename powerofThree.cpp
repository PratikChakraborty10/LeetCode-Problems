#include<bits/stdc++.h>
using namespace std;
bool ispow(int n){
    if(n==1)
        return false;
    while(n%3==0)
        n/=3;
    return true;
}
int main(){
    int n;
    cin>>n;
    if(ispow(n))
        cout<<"True";
    else    
        cout<<"False";
    return 0;
}
