#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int a,b;
    cin>>a>>b;

    ll res=LLONG_MAX;
    for(int add=0; add<32; add++){
        int A=a;
        int B=b+add;
        if(B==1)    // As a divide by  b will result in a itself so we will stuck in infinte loop
            continue;

        ll cnt=add; // Moves spent increasing b
        
        while(A>0){
            A/=B;
            cnt++;
        }
        res=min(res, cnt);
    }
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
