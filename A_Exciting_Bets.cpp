#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll a,b;
    cin>>a>>b;

    if(a==b){
        cout<<"0 0\n";
        return;
    }

    if(a<b){
        a=a^b;
        b=a^b;
        a=a^b;
    }

    ll res=a-b;  // gcd(a,b)=gcd(a-b, b) -> as (a-b) will remain constant so it is max gcs as of now
    cout<<res<<" "<<min(b%res, res-(b%res))<<"\n";   
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