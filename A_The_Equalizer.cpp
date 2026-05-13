#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    ll sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    ll sum2=k*n;
    cout<<((sum%2==0 && sum2%2==1)?"NO\n":"YES\n");
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