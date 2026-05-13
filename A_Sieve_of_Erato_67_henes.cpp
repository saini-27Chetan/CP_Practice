#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    vector<int> a(n);
    bool flag=0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==67)
            flag=1;
        
    }
    cout<<(flag? "YES\n":"NO\n");
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