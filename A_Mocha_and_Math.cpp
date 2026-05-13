#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;
    vector<int>a(n);
    int ans;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(i==0){
            ans=a[i];
            continue;
        }

        ans &= a[i];
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