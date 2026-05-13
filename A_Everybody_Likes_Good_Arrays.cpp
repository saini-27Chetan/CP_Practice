#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int>a(n);
    int res=0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(i==0)
            continue;

        if(a[i]%2==a[i-1]%2){
            a[i]=((a[i]%2==0)?2:1);
            res++;
        }
    }
    cout<<res<<endl;
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