#include <bits/stdc++.h>
using namespace std;

#define ll long long

void process(){
    ll n,x,y,k;
    cin>>n>>x>>y>>k;

    ll diff=abs(x-y);
    ll minDist=min(diff, n-diff);

    if(n>3)
        cout<<minDist+k<<'\n';
    else
        cout<<'1'<<"\n";
}

int main() {
    int t;
    cin>>t;

    while(t--){
        process();
    }

    return 0;
}
