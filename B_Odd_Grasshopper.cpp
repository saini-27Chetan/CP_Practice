#include <bits/stdc++.h>
using namespace std;

void process(){
    long long x, n;
    cin>>x>>n;

    long long ans, mod = n%4;
    if(mod==0)
        ans=0;
    else if(mod==1)
        ans=-n;
    else if(mod==2)
        ans=1;
    else
        ans=n+1;

    if(x&1)
        ans = x-ans;
    else
        ans = x+ans;
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