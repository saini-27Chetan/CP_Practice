#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n, x;
    cin>>n>>x;

    vector<int> v(n);
    int ans=INT_MIN;
    int prev=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        
        int diff=v[i]-prev;
        ans=(ans<diff)? diff:ans;
        prev=v[i];
    }

    int right=x-v[n-1];

    if((right<<1)>ans)
        ans=right<<1;

    cout<<ans<<endl;
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
