#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    vector<int> a(n);
    bool flag=false;
    
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end(), greater<int>());
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            flag=true;
            break;
        }
    }
    if(flag)
        cout << "-1\n";
    else{
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}