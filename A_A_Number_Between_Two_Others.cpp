#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll x,y;
    cin>>x>>y;

    ll z=x*2;
    for(; z<y; z+=x){
        if(y%z){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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