#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n,x,y;
    cin>>n>>x>>y;

    vector<ll> a(n), divArr(n);
    ll total=0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        divArr[i] = a[i]/x;
        total += divArr[i];
    }

    ll ans = LLONG_MIN;
    for(int i=0; i<n; i++){
        ll val = (a[i] + (total-divArr[i])*y);
        ans = max(ans, val);
    }
    cout<<ans<<"\n";
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