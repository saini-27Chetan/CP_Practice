#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,q;
    cin>>n>>q;

    vector<int> a(n), prefix(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        
        if(i==0){
            prefix[i] = a[i];
            continue;
        }
        
        prefix[i] = prefix[i-1] + a[i];
    }
    ll sum=prefix[n-1];

    int l,r,k;
    vector<int> query(q);
    bool flag;
    for(int i=0; i<q; i++){
        cin>>l>>r>>k;
        flag=1;
        
        int subtract = prefix[r-1]-prefix[l-2];
        if(l==1)
            subtract = prefix[r-1];
        else
            subtract = prefix[r-1]-prefix[l-2];

        if(((sum - subtract + (r - l + 1) * k) & 1) == 0)
            flag=0;
        
        if(!flag)
            cout<<"NO\n";
        else
          cout<<"YES\n";
    } 
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