#include <bits/stdc++.h>
using namespace std;

void process(){
    long long n;
    cin>>n;

    bool check = ((n>0) && ((n&(n-1))==0));
    if(check)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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