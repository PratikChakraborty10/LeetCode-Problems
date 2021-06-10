#include<bits/stdc++.h>
using namespace std;
void sieve_prime(int n){
    int prime[n+1] = {0};
    for(int i=2; i<n; i++){
        if(prime[i]== 0){
            for(int j= i*i; j<=n; j+=i)
                prime[j] = 1;
        }
    }
    int count=0;
    for(int i=2; i<=n; i++)
        if(prime[i] == 0)
            ++count;
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    sieve_prime(n);
    return 0;
}
