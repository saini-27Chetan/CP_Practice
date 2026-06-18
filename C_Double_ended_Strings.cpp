#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vvvi vector<vector<vector<int>>>

int helperFunc(string& s1, string& s2, int i, int j, int curr, vvvi &dp){
    if(i<0 || j<0)
        return curr;

    if(dp[i][j][curr]!=-1)
        return dp[i][j][curr];

    int same=curr;    
    if(s1[i]==s2[j])
        same=helperFunc(s1, s2, i-1, j-1, curr+1, dp);
        
    int f=helperFunc(s1, s2, i-1, j, 0, dp);
    int s=helperFunc(s1, s2, i, j-1, 0, dp);

    return dp[i][j][curr]=max(same, max(f, s));
}

void performTask(){
    string a,b;
    cin>>a>>b;
    
    int n=a.length(), m=b.length();
    vvvi dp(n, vector<vector<int>> (m, vector<int> (min(n,m)+1, -1)));
    int maxSub=helperFunc(a,b,n-1,m-1, 0, dp);
    int res=n+m-(maxSub<<1);
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
