#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    vector<int> a(n+1), ans(n+1);
    vector<pair<int,int>>temp;
    for(int i=1; i<=n; i++){
        cin>>a[i];

        temp.push_back({a[i],i});
    }
    sort(temp.begin(), temp.end());

    int st=-1, end=-1;
    for(int i=1; i<n; i++){
        if(temp[i].first!=temp[i-1].first){
            if((end-st+1)==1){
                cout<<"-1\n";
                return;
            }

            int j=end, tempIdx=temp[end].second;
            while(j>st){
                ans[temp[j].second]=temp[j-1].second;
                j--;
            }
            ans[temp[j].second]=tempIdx;

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

    int j=end, tempIdx=temp[end].second;
    while(j>st){
        ans[temp[j].second]=temp[j-1].second;
        j--;
    }
    ans[temp[j].second]=tempIdx;
    
    for(int i=1; i<=n; i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
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