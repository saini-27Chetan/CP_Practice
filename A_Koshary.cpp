#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int x,y;
    cin>>x>>y;
    int X=x%2, Y=y%2;
    if(X==1 && Y==1)
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