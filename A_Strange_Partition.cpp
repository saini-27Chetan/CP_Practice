#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n, x;
    cin>>n>>x;

    ll maxi=0, mini=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        maxi+=ceil((double)a[i]/x);

        mini+=a[i];
    }

    mini=ceil((double)mini/x);
    cout<<mini<<" "<<maxi<<"\n";
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
