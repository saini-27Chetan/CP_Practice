#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    int x;
    bool flag=0;    
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(k==1){
            if(i==0){
                x = v[0];
                continue;
            }
            
            if(x>v[i])
                flag=1;
                
            x=v[i];
        }
    }

    cout<<((!flag)?"YES\n":"NO\n");
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