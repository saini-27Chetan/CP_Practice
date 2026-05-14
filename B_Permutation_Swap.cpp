#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int k=abs(a[0]-1);
    for(int i=0; i<n; i++)
        k=__gcd(k, abs(a[i]-(i+1)));

    cout<<k<<"\n";
    return;
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