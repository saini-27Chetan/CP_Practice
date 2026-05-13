#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    if(!(n&1)){
        cout<<(n>>1)<<" "<<(n>>1)<<"\n";
        return;
    }

    int best=1;
    for(int i=2; i*i<=n; i++){
        if (n % i == 0) {
            best = max(best, i);
            if (i != n / i)
                best = max(best, n / i);
        }
    }
    cout<<best<<" "<<(n-best)<<"\n";
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