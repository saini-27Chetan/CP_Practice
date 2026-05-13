#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    long long ans = a[n-1]-a[0];
    for(int i=n-2; i>=1; i--)
        ans = max(ans, a[i]-a[0]);
        
    for(int i=0; i<n-1; i++)
        ans = max(ans, a[n-1]-a[i]);


    for(int i=1; i<n; i++)
        ans = max(ans, a[i-1]-a[i]);

    cout<<ans<<endl;
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