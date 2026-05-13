#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;

    if(__gcd(n, a)==1 && __gcd(m, b)==1 && __gcd(n, m)<=2)
        cout << "YES\n";
    else
        cout << "NO\n";
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