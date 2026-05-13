#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n, x;
    cin>>n>>x;

    ll maxAns=0, minAns=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        maxAns+=ceil((double)a[i] / x);

        minAns+=a[i];
    }

    minAns = ceil((double)minAns / x);
    cout<<minAns<<" "<<maxAns<<"\n";
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