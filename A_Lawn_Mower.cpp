#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n, w;
    cin>>n>>w;

    ll division = n/w, modulus = n%w;
    cout<<(division*(w-1) + modulus)<<"\n";
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