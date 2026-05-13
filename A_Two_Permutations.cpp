#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,a,b;
    cin>>n>>a>>b;

    if((a==b && a==n) || (a+b)<(n-1) || (a+b)==2*n)
        cout<<"Yes\n";
    else
        cout<<"No\n";
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