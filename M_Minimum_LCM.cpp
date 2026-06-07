#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    if(!(n&1)){
        cout<<(n>>1)<<" "<<(n>>1)<<"\n";
        return;
    }

    int res=1;
    for(int i=2; i*i<=n; i++){
        if (n%i==0) {
            res=max(res, i);
            if(i!=n/i)
                res=max(res, n/i);
        }
    }
    cout<<res<<" "<<(n-res)<<"\n";
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
