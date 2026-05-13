#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;

        vector<long long> original(n), a(n);

        for(int i=0; i<n; i++){
            cin>>original[i];
            a[i]=original[i];
        }

        unordered_map<int, long long> mp;
        long long maxEle = *max_element(original.begin(), original.end());
        long long originalMax = maxEle;
        for(int i=0; i<m; i++){
            int b;
            long long c;
            cin>>b>>c;

            b--;

            mp[b] += c;
            long long newVal = original[b] + mp[b];
            maxEle = max(maxEle, newVal);

            if (maxEle > h) {
                mp.clear();
                maxEle = originalMax;
            }
        }

        for (int i = 0; i < n; i++) {
            long long val = original[i];
            if (mp.count(i)) 
                val += mp[i];
            cout << val << " ";
        }
        cout << "\n";
    }
    return(0);
}