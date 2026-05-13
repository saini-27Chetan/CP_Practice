#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n;
    cin>>n;
    
    vector<ll> a(n), b(n);
    for(ll i=0; i<n; i++)
        cin>>a[i];
    
    for(ll i=0; i<n; i++)
        cin>>b[i];
    
    ll ans=0;
    
    for(ll i=0; i<n; i++){
        ll val;
        
        if(i==0)
            val=__gcd(a[0],a[1]);
        else if(i==n-1)
            val = __gcd(a[n-2], a[n-1]);
        else{
            ll left_gcd=__gcd(a[i-1], a[i]);
            ll right_gcd=__gcd(a[i], a[i+1]);
            val=lcm(left_gcd, right_gcd);
        }
        
        if(val<a[i])
            ans++;
    }
    
    cout<<ans<<"\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }
    return 0;
}