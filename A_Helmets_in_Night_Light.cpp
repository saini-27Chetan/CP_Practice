#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n, p;
    cin>>n>>p;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cin>>b[i];

    vector<pair<ll, ll>> v(n);
    ll ans=p;
    ll informed=1;

    for(int i=0; i<n; i++)
        v[i]={b[i], a[i]};

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        int c=v[i].first;
        int people=v[i].second;

        if(c>=p)
            break;

        if((informed+people)>n){
            ans+=(n-informed)*c;
            informed=n;
            break;
        }    
        
        ans+=people*c;
        informed+=people;
    }

    if(informed!=n)
        ans+=(n-informed)*p;
    
    cout<<ans<<"\n";
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
