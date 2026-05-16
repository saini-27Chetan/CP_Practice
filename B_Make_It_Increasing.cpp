#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int i=n-2, cnt=0;
    while(i>=0){
        while(a[i]>=a[i+1]){
            a[i] >>= 1;
            cnt++;
            if(a[i]==0)
                break;
        }
        if(a[i]==0 && a[i+1]==0){
            cnt=-1;
            break;
        }
        i--;
    }

    cout<<cnt<<"\n";
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