#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n;
    cin>>n;

    vector<pair<ll, ll>> a(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;

        a[i] = {x, i+1};
    }

    sort(a.rbegin(), a.rend());

    vector<ll> sequence(n+1, 0);
    // Headquarter is placed at idx 0
    ll ans=0;
    ll x=1;
    for(ll i=0; i<n; i++){
        sequence[a[i].second] = x;
        ans += (2 * abs(x) * a[i].first);

        if(x<0){
            x = -x;
            x += 1;
        }
        else
            x = -x;
    }

    cout<<ans<<"\n";
    for(auto x: sequence)
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