#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_set<char> st;
    unordered_map<char, int> mp;

    for(char ch : s)
        mp[ch]++;

    int ans = 0;
    for(int i=0; i<n; i++){
        st.insert(s[i]);
        mp[s[i]]--;
        
        if(mp[s[i]]==0)
            mp.erase(s[i]);

        ans = max(ans, ((int)st.size()+ (int)mp.size()));
    }
    cout<<ans<<"\n";
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