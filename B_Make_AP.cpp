#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll a,b,c;
    cin>>a>>b>>c;
    bool flag=false;

    ll new_a=(b<<1)-c;
    if(new_a/a>0 && new_a%a==0)
        flag=true;

    ll new_b=((a+c)>>1);
    if(new_b/b>0 && new_b%b==0 && (c-a)%2==0)
        flag=true;

    ll new_c=(b<<1)-a;
    if(new_c /c>0 && new_c%c==0)
        flag=true;

    if(flag)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
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