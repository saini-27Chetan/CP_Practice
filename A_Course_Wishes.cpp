#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n, k;
    cin>>n>>k;

    int maxK=k+1, op=0;
    vector<int> ans;
    vector<int>a(k+1), b(n+1);
    a[0]=-1;
    b[0]=-1;
    
    for(int i=1; i<=k; i++)
        cin>>a[i];
    
    unordered_map<int, int>mp;
    for(int i=1; i<=n; i++){
        cin>>b[i];
        mp[b[i]]++;
    }

    bool flag=false;
    for(int i=1; i<=n; i++){
        bool update=false;
        for(int j=1; j<=n; j++){
            if(op>1000){                
                flag=1;
                break;
            }
            if(b[j]==maxK)
                continue;
            if(b[j]+1<maxK && mp[b[j]+1]<a[b[j]+1]){
                ans.push_back(j);
                mp[b[j]]--;
                b[j]+=1;
                mp[b[j]]++;
                op++;
                update=true;
            }
            else if(b[j]+1==maxK){
                ans.push_back(j);
                mp[b[j]]--;
                b[j]+=1;
                mp[b[j]]++;
                op++;
                update=true;
            }
        }
        if(!update)
            break;
    }
    if(flag){
        cout<<"-1\n";
        cout<<"\n";
    }
    else{
        cout<<op<<"\n";
        for(auto x: ans)
            cout<<x<<" ";
        cout<<"\n";
    }
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