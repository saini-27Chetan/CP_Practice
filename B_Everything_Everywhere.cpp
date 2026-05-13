#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int cnt=0;
    for(int i=1; i<n; i++){
        int f=arr[i-1], s=arr[i];
        if(abs(f-s)==__gcd(f,s))
            cnt++;
    }
    cout<<cnt<<"\n";
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