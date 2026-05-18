#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll x,n;
    cin>>x>>n;

    ll res, mod=n%4;
    if(mod==0)
        res=0;
    else if(mod==1)
        res=-n;
    else if(mod==2)
        res=1;
    else
        res=n+1;

    if(x&1)
        res=x-res;
    else
        res=x+res;
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