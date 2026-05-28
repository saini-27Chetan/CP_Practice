#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n,k;
    cin>>n>>k;

    ll sizeArr=n*k;
    vector<ll> a(sizeArr); 
    for(int i=0; i<sizeArr; i++)
        cin>>a[i];

    ll res=0;
    ll idx=sizeArr;

    while(k--){
        idx-=((n>>1)+1);
        res+=a[idx];
    }
    cout<<res<<"\n";
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
