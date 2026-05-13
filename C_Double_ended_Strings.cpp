#include <bits/stdc++.h>
using namespace std;
#define ll long long

int helper(string& s1, string& s2, int i, int j, int curr, vector<vector<vector<int>>>& dp){
    if(i<0 || j<0)
        return curr;

    if(dp[i][j][curr]!=-1)
        return dp[i][j][curr];
    int same=curr;    
    if(s1[i]==s2[j])
        same=helper(s1, s2, i-1, j-1, curr+1, dp);
        
    int first=helper(s1, s2, i-1, j, 0, dp);
    int second=helper(s1, s2, i, j-1, 0, dp);

    return dp[i][j][curr]=max(same, max(first, second));
}

void process(){
    string a,b;
    cin>>a>>b;
    
    int n=a.length(), m=b.length();
    vector<vector<vector<int>>> dp (n, vector<vector<int>> (m, vector<int> (min(n,m)+1, -1)));
    int maxSub=helper(a,b,n-1,m-1, 0, dp);
    int ans=n+m-(maxSub<<1);
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