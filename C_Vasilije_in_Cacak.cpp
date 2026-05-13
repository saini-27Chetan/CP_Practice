#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n,k,x;
    cin>>n>>k>>x;

    ll pre=0, suff=0;
    pre=(k*(k+1))/2;
    suff=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);

    if(x>=pre && x<=suff)
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