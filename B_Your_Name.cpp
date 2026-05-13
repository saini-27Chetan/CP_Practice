#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        string s,t;
        cin>>s>>t;

        vector<int> hash(26,0);
        for(auto i:s){
            hash[i-'a']++;
        }

        for(auto i:t){
            hash[i-'a']--;
        }
        bool flag=0;
        for(int i=0; i<26; i++){
            if(hash[i]==0)
                continue;
            else{
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO\n";
        else    
            cout<<"YES\n";
    }
    return(0);
}