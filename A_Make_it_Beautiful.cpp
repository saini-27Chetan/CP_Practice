#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];       
    
    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    cout<<a[n-1]<<" ";
    for(int i=0; i<n-1; i++)
        cout<<a[i]<<" ";
    cout<<endl;
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