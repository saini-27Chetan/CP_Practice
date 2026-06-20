#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll helper(ll n){
    for(ll i=n; ; i++){
        bool flag=true;
        for(ll j=2; j*j<=i; j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)
            return i;
    }
    return -1;
}

void performTask(){
    ll d;
    cin>>d;

    ll p=helper(d+1);
    ll q=helper(p+d);

    cout<<min(1LL*p*p*p, 1LL*p*q)<<"\n";
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