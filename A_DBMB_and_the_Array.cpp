#include <bits/stdc++.h>
using namespace std;

void process(){
    int n,s,x;
    cin>>n>>s>>x;

    long long sum=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    int left=0;
    bool flag=0;
    if(s>sum){
        left=s-sum;
        if((left%x) == 0)
            flag=1;
    }

    if(s==sum)
        flag=1;

    if(flag)
        cout<<"YES\n";
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