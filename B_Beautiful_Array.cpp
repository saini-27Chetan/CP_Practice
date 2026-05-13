#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n, k, b, s;
    cin>>n>>k>>b>>s;

    if(s<(k*b) || s>(k*b + (k-1)*n)){
        cout<<"-1\n";
        return;
    }

    vector<ll> ans(n);
    ans[0]=(k*b);
    s-=ans[0];
    for(ll i=0; i<n; i++){
        ans[i]+=min(k-1, s);
        s-=min(k-1, s);
    } 
    for(auto x: ans)
        cout<<x<<" "; 
    cout<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}