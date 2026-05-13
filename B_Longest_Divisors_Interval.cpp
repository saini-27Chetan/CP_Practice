#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n;
    cin>>n;

    int res=1;
    while(n%res==0)
        res++;

    cout<<res-1<<"\n";
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