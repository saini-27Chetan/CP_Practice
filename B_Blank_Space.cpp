#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n);
    int ans=0, cnt=0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==0)
            cnt++;
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    if(cnt!=0)
        ans=max(ans,cnt);
        
    cout<<ans<<"\n";
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