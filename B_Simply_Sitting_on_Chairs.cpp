#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int ans=0;
    for(int i=0; i<n; i++){
        if(a[i]<=i+1)
            ans++;
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