#include <bits/stdc++.h>
using namespace std;

void process(){
    long long n;
    cin>>n;

    if(n<4 || n&1){
        cout<<"-1\n";
        return;
    }

    long long maxAns, minAns;
    maxAns = n/4;
    minAns = (n+5)/6;
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