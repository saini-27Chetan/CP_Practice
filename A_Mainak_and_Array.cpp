#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    ll ans=a[n-1]-a[0];
    for(int i=n-2; i>=1; i--)
        ans=max(ans, a[i]-a[0]);
        
    for(int i=0; i<n-1; i++)
        ans=max(ans, a[n-1]-a[i]);


    for(int i=1; i<n; i++)
        ans=max(ans, a[i-1]-a[i]);

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