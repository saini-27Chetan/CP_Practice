#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;

        if (k > n) {
            cout << -1 << "\n";
            continue;
        }

        long long ans = -1;
        for (int d = 0; (1LL << d) <= n; d++) {
            long long low = n >> d;
            long long high = (n + (1LL << d) - 1) >> d;

            if (low <= k && k <= high) {
                ans = d;
                break;
            }
        }

        cout << ans << "\n";
    }
    
    return(0);
}