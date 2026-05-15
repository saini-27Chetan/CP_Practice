#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1)
            a[i]+=1;
            
        if(i==0)
            continue;

        if(a[i]%a[i-1]==0)
            a[i]+=1;
    }

    for(auto x:a)
        cout<<x<<" ";
    cout<<"\n";
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