#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n, diff=INT_MAX;
    cin>>n;
    vector<int>v(n);
    bool check=0;
    for(int i=0; i<n; i++){
        cin>>v[i];

        if(i==0)
            continue;
        
        if(v[i]<v[i-1])
            check=1;
    
        diff=min(diff, v[i]-v[i-1]);
    }
        
    if(check){
        cout<<"0\n";
        return;
    }

    cout<<(diff/2)+1<<endl;
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