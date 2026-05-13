#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int st=0,end=n,ans=0;

    auto check=[&](int m){
        vector<bool>flag(m,true);
        vector<int>temp;
        
        for(int x:a){
            if(x<m&&flag[x])
                flag[x]=false;
            else{
                int y=(x==0)?-1:(x-1)/2;
                temp.push_back(y);
            }
        }

        sort(temp.rbegin(),temp.rend());

        int w_idx=0;
        for(int i=m-1;i>=0;--i){
            if(flag[i]){
                if(w_idx<temp.size()&&temp[w_idx]>=i)
                    w_idx++;
                else
                    return false;
            }
        }
        return true;
    };

    while(st<=end){
        int mid=st+(end-st)/2;
        if(check(mid)){
            ans=mid;
            st=mid+1;
        }else
            end=mid-1;
    }

    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}