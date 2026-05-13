#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int> cnt(26, 0);
    for(int i=0; i<n; i++)
        cnt[s[i]-'a']++;

    int odd_cnt=0;
    for(int i=0; i<26; i++){
        if(cnt[i]&1)
            odd_cnt++;
    }

    if(odd_cnt>k+1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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