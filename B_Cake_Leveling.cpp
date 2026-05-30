#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    ll sum=0;
    ll res=LLONG_MAX;
    
    for(int i=0; i<n; i++){
        sum+=a[i];
        ll curr=sum/(i+1);
        res=min(res,curr);
        cout<<res<<(i==n-1?"":" ");
    }
    cout << "\n";
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