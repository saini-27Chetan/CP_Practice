#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n,k,q;
    cin>>n>>k>>q;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    ll cnt=0, st=-1, len, i;
    for(i=0; i<n; i++){
        if(st==-1 && a[i]<=q)
            st=i;
        else if(st!=-1 && a[i]>q){
            len=i-st;
            if(len>=k){
                ll x=len-k+1;
                cnt+=((x*(x+1))>>1);
            }
            st=-1;
        }
    }
    if(st!=-1){
        len = i-st;
        if(len>=k){
            ll x=len-k+1;
            cnt+=((x*(x+1))>>1);
        }
    }

    cout<<cnt<<"\n";
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
