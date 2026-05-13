#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 676767677 
void process(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    ll sum=0;
    for(auto x:arr){
        if(x!=1)
            sum+=x;
    }

    if(sum==0){
        cout<<"1\n";
        return;
    }
    
    if(arr[n-1]==1)
        sum+=1;
    cout<<sum%mod<<"\n";
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