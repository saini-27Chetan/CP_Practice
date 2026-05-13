#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int>a(n);
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        ans^=a[i];
    }

    int temp=0;
    for(int i=0; i<n; i++)
        temp^=(ans^a[i]);

    if(temp==0)
        cout<<ans<<"\n";
    else
        cout<<"-1\n";
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