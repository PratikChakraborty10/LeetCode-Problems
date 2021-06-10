#include<bits/stdc++.h>
using namespace std;
int sumSquare(int n){
    int sq = 0;
    while(n){
        int d = n%10;
        sq+= d*d;
        n /= 10;
    }
    return sq;
}
bool isHappy(int n){
    set<int> s;
    s.insert(n);
    while(1){
        if(n==1)
            return true;
        n=sumSquare(n);
        if(s.find(n) != s.end())
            return false;
        s.insert(n);
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(isHappy(n))
        cout<<"True";
    else    
        cout<<"False";
    return 0;
}
