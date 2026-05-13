#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;
    
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<long long> prefix(n);
    for(int i=0; i<n; i++){
        cin>>b[i];
        if(i==0){
            prefix[i]=b[i];
            continue;
        }

        prefix[i] = prefix[i-1]+b[i];
    }

    sort(a.begin(), a.end());

    long long ans=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[i-1] && i!=0)
            continue;
            
        int numSwords = n-i;

        auto it = (upper_bound(prefix.begin(), prefix.end(), numSwords)-prefix.begin());
        ans = max(ans, (long long)(it*a[i]));
    }

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