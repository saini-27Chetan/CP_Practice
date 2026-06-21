#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void performTask(){
    int n, k;
    cin>>n>>k;
 
    vector<int> a(n);
    ll s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
 
    ll s2=k*n;
    cout<<((s%2==0 && s2%2==1)?"NO\n":"YES\n");
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