#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll a,b,c;
    cin>>a>>b>>c;

    if(c&1){
        if(b>a)
            cout<<"Second\n";
        else
            cout<<"First\n";
    }
    else{
        if(a>b)
            cout<<"First\n";
        else
            cout<<"Second\n";
    }
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