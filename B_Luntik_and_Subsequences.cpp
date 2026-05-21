#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    int cnt0=0, cnt1=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0)
            cnt0++;
        if(a[i]==1)
            cnt1++;
    }
    cout<<(ll)(cnt1*(ll)(pow(2, cnt0)))<<"\n";
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