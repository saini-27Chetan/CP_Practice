#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll w,h;
    cin>>w>>h;
    
    ll area = LLONG_MIN;
    for(int i=0; i<4; i++){
        ll k, first, last;
        cin>>k;

        for(int j=0; j<k; j++){
            ll num;
            cin>>num;

            if(j == 0)
                first = num;
            if(j == k-1)
                last = num;
        }
        ll base = last - first;
        ll height;

        if(i<=1)
            height = h;
        else
            height = w;

        area = max(area, base*height);
    }
    cout<<area<<"\n";
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