#include <bits/stdc++.h>
using namespace std;

#define ll long long
void process(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n+1);
    for(int i=1; i<=n; i++)
        cin>>a[i];

    ll l=0, len=m;

    for(int i=1; i<=n; i++){
        if(!len) 
            continue; 
        
        ll x=(m-(a[i]+i)%m)%m;
        ll y=(l+len-1)%m;
        
        if(x==y)
            len--; 
        else{
            l=(x+1)%m;
            len=m-1;
        }
    }

    if (len > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
    
    return 0;
}