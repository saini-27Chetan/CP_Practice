#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int a,b;
    cin>>a>>b;

    ll ans=LLONG_MAX;
    for(int add=0; add<32; add++){
        int B=b+add;
        int A=a;
        if(B==1)    // As a divide by  b will result in a itself so we will stuck in infinte loop
            continue;

        ll count=add; // Moves spent increasing b
        
        while(A>0){
            A/=B;
            count++;
        }
        ans=min(ans, count);
    }
    cout<<ans<<"\n";
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