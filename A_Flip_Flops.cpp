#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n,c,k;
    cin>>n>>c>>k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    for(ll i=0; i<n; i++){
        if(a[i]<=c){
            if(k){
                if(k+a[i]<=c){
                    a[i]+=k;
                    k=0;
                }
                else{
                    ll diff=c-a[i];
                    k-=diff;
                    a[i]+=diff;
                }    
            }
            c+=a[i];
        }
        else
            break;
    }
    cout<<c<<"\n";
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