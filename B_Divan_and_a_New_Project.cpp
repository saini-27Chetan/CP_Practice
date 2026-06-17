#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

void performTask(){
    ll n;
    cin>>n;

    vector<pll> a(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;

        a[i]={x, i+1};
    }

    sort(a.rbegin(), a.rend());

    vector<ll> seq(n+1, 0);
    // Headquarter is placed at idx 0
    ll res=0;
    ll x=1;
    for(ll i=0; i<n; i++){
        seq[a[i].second]=x;
        res+=(2*abs(x)*a[i].first);

        if(x<0){
            x=-x;
            x++;
        }
        else
            x=-x;
    }

    cout<<res<<"\n";
    for(auto &x: seq)
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
