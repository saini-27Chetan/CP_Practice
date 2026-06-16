#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll w,h;
    cin>>w>>h;
    
    ll area=LLONG_MIN;
    for(int i=0; i<4; i++){
        ll k,fst,lt;
        cin>>k;

        for(int j=0; j<k; j++){
            ll n;
            cin>>n;

            if(j==0)
                fst=n;
            if(j==k-1)
                lt=n;
        }
        ll base=lt-fst, height;

        if(i<=1)
            height=h;
        else
            height=w;

        area=max(area, base*height);
    }
    cout<<area<<"\n";
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
