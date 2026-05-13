#include <bits/stdc++.h>
using namespace std;

void process(){
    long long n;
    cin>>n;

    int ans=1;
    while(n%ans==0)
        ans++;

    cout<<ans-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}