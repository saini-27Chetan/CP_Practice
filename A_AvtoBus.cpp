#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n;
    cin>>n;

    if(n<4 || n&1){
        cout<<"-1\n";
        return;
    }

    ll maxAns, minAns;
    maxAns=n/4;
    minAns=(n+5)/6;
    cout<<minAns<<" "<<maxAns<<"\n";
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