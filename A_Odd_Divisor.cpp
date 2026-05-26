#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n;
    cin>>n;

    bool flag=((n>0) && ((n&(n-1))==0));
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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
