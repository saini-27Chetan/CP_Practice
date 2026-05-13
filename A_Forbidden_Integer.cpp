#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,k,x;
    cin>>n>>k>>x;

    vector<int> res;
    while(n>0 && k>0){
        if((x==1)&&((n&1)==0)&&(k&1))
            k--;
        if((x==1)&&(n&1)&&((k&1)==0))
            k--;
        if(k==x||n<k)
            k--;
        else{
            res.push_back(k);
            n-=k;
        }
    }

    if(n==0){
        cout<<"YES\n"<<res.size()<<endl;
        for(auto x: res)
            cout<<x<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO\n";
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