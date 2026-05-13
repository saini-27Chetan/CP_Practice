#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n,k;
    cin>>n>>k;

    ll arrSize = n*k;
    vector<ll> a(arrSize); 
    for(int i=0; i<arrSize; i++)
        cin>>a[i];

    ll ans=0;
    ll ptr = arrSize;

    while(k--){
        ptr-=((n>>1)+1);
        ans+=a[ptr];
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