#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    bool flag=0;
    for(int i=0; i<n; i++){
        cin>>v[i];

        if(v[i]==k)
            flag=1;
    }

    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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