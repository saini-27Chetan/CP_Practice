#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        long long ans=-1;
        for(long long i=2; i<=100; i++){
            bool flag=0;
            for(auto x:a){
                if(__gcd(x, i)==1){
                    flag=1;
                    break;
                }
            }
            if(flag){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }   
    return(0);
}