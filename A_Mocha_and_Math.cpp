#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int>a(n);
    int res;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0){
            res=a[i];
            continue;
        }
        res&=a[i];
    }
    cout<<res<<"\n";
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