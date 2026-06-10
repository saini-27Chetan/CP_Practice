#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n, k, b, s;
    cin>>n>>k>>b>>s;

    if(s<(k*b) || s>(k*b + (k-1)*n)){
        cout<<"-1\n";
        return;
    }

    vector<ll> res(n);
    res[0]=(k*b);
    s-=res[0];
    for(ll i=0; i<n; i++){
        res[i]+=min(k-1, s);
        s-=min(k-1, s);
    } 
    for(auto x: res)
        cout<<x<<" "; 
    cout<<"\n";
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
