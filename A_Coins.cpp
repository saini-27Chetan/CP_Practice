#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n,k;
    cin>>n>>k;

    if((n&1)==0 || ((n-k)&1)==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}