#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    int st=0, i;
    int ans=INT_MAX;
    for(i=1; i<n; i++){
        if(abs(a[i]-a[i-1])>k){
            ans=min(ans, (n-(i-1-st+1)));
            st=i;
        }
    }
    ans=min(ans, (n-(i-1-st+1)));
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