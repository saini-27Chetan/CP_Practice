#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int> v(n-1);
    ll sum=0;
    for(int i=0; i<n-1; i++){
        cin>>v[i];
        sum+=v[i];
    }

    cout<<-(sum)<<endl;
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