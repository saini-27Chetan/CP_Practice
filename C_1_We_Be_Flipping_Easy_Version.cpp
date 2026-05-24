#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int> ans, temp;

    bool flag=false;
    for(int i=n-1; i>=0; i--){
        ll val=a[i];

        if(flag)
            val=-val;

        if(val>0){
            if(!flag)
                ans.push_back(i+1);
            else
                temp.push_back(i+1);
            flag=!flag;
        }
    }

    cout<<ans.size()+temp.size()<<"\n";
    for(int i=ans.size()-1; i>=0; i--)
        cout<<ans[i]<<" ";
    for(int i=0; i<temp.size(); i++)
        cout<<temp[i]<<" ";
    cout<<"\n";    
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