#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n; 
    cin>>n;
    vector<ll> b(n), a; 
    for(int i=0; i<n; i++)
    cin>>b[i];
    
    a.push_back(b[0]); 
    for(int i=1; i<n; i++){
        if(b[i]>=b[i-1])
            a.push_back(b[i]); 
        else{
            a.push_back(b[i]); 
            a.push_back(b[i]); 
        }
    }
    cout<<a.size()<<"\n"; 
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
