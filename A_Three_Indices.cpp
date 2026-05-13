#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    bool flag=0;
    int j;
    for(j=1; j<n-1; j++){
        if(a[j-1]<a[j] && a[j]>a[j+1]){
            flag=1;
            break;
        }
    }

    if(flag)
        cout<<"YES\n"<<j<<" "<<j+1<<" "<<j+2<<"\n";
    else
        cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}