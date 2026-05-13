#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    ll res=0;
    if(b>d){
        cout<<"-1\n";
        return;
    }

    if(b!=d){
        res+=abs(b-d);
        a+=res;
    }
    if(a>c)
        res+=abs(a-c);
    else if(a==c)
        res+=0;
    else
        res=-1;

    cout<<res<<"\n";
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
