#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        cin>>b[i];

    ll sum=0;
    int maxEle=0;

    for(int i=0;i<n;i++){
        sum+=max(a[i], b[i]);
        maxEle=max(maxEle, min(a[i], b[i]));
    }

    cout<<sum+maxEle<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--)
        performTask();

    return 0;
}