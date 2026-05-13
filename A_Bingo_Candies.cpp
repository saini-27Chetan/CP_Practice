#include <bits/stdc++.h>
using namespace std;

void helper(){
    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int> (n));
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            
            m[a[i][j]]++;
        }
    }

    int allowed = (n*(n-1));
    for(auto x: m){
        if(x.second>allowed){
            cout<<"NO\n";
            return;
        }
    }  
    cout<<"YES\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return(0);
}