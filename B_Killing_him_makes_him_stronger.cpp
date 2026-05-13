#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;    
    while(t--){
        int n, d, p, k;
        cin>>n>>d>>p>>k;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());

        int i = 0; 
        // int kill=0;  No need of this kill
        bool flag=0;
        while(i<=k){
            auto it = upper_bound(a.begin(), a.end(), d);

            if(it == a.end()){
                flag=1;
                break;
            }

            else{
                *it=-1;
                i++;
                d+=p;
                // kill++;
            }
        }

        // if(flag || kill< k+1)
        //     cout<<"NO\n";
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    return(0);
}