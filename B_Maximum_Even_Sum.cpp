#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;

        long long ans=LLONG_MIN;

        vector<long long> divisor;
        for(long long k=1; k<=sqrt(b); k++){
            if(b%k==0){
                divisor.push_back(k);
                if(k != b/k)
                    divisor.push_back(b/k);
            }
        }

        for(auto i:divisor){
            __int128 sum = (__int128)a*i + b/i;
            
            if ((sum & 1) == 0) {
                ans = max(ans, (long long)(sum));
            } 
        }
        if(ans==LLONG_MIN)
            cout<<"-1"<<endl;
        else    
            cout<<ans<<endl;
    }
    return(0);
}