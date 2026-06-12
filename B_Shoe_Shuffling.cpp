#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int> a(n+1), res(n+1);
    vector<pair<int,int>>t;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        t.push_back({a[i],i});
    }
    
    sort(t.begin(), t.end());

    int st=-1, end=-1;
    for(int i=1; i<n; i++){
        if(t[i].first!=t[i-1].first){
            if((end-st+1)==1){
                cout<<"-1\n";
                return;
            }

            int j=end, tIdx=t[end].second;
            while(j>st){
                res[t[j].second]=t[j-1].second;
                j--;
            }
            res[t[j].second]=tIdx;

            st=i;
            end=i;
        }
        else{
            if(st==-1)
                st=i-1;

            end=i;
        }
    }

    if((end-st+1)==1){
        cout<<"-1\n";
        return;
    }

    int j=end, tIdx=t[end].second;
    while(j>st){
        res[t[j].second]=t[j-1].second;
        j--;
    }
    res[t[j].second]=tIdx;
    
    for(int i=1; i<=n; i++)
        cout<<res[i]<<" ";
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
