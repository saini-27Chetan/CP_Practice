#include <bits/stdc++.h>
using namespace std;

void process(){
    int n,q;
    cin>>n>>q;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];

    a[n-1] = max(a[n-1], b[n-1]);
    for(int i=n-2; i>=0; i--)
        a[i] = max({a[i], b[i], a[i+1]});

    vector<int> sum(n);
    sum[0]=a[0];
    for(int i=1; i<n; i++)
        sum[i] = sum[i-1]+a[i];
    
    int l, r;
    while(q--){
        cin>>l>>r;
        l--;         
        r--;
        cout<<(sum[r] - (sum[l]-a[l]))<<" ";
    }
    cout<<"\n";
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