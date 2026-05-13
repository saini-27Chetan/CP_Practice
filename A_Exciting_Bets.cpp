#include <bits/stdc++.h>
using namespace std;

void process(){
    long long a,b;
    cin>>a>>b;

    if(a==b){
        cout<<"0 0\n";
        return;
    }

    if(a<b){
        a = a^b;
        b = a^b;
        a = a^b;
    }

    long long ans = a-b;  // gcd(a,b)=gcd(a-b, b) -> as (a-b) will remain constant so it is max gcs as of now
    cout<<ans<<" "<<min(b%ans, ans-(b%ans))<<"\n";   
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