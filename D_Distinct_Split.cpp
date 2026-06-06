#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    unordered_set<char> st;
    unordered_map<char,int> mp;

    for(char ch:str)
        mp[ch]++;

    int res=0;
    for(int i=0; i<n; i++){
        st.insert(str[i]);
        mp[str[i]]--;
        
        if(mp[str[i]]==0)
            mp.erase(str[i]);
        res=max(res, ((int)st.size()+(int)mp.size()));
    }
    cout<<res<<"\n";
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
