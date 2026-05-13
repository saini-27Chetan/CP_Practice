#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int> mp;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    if(mp.size()==1)
        cout<<"Yes\n";

    else if(mp.size()==2){
        int cnt1=mp.begin()->second;
        int cnt2=mp.rbegin()->second;
        
        if(cnt1==cnt2) 
            cout<<"Yes\n"; 
        else if((n&1)&&abs(cnt1-cnt2)==1) 
            cout<<"Yes\n"; 
        else
            cout<<"No\n"; 
    }
    
    else
        cout<<"No\n";
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