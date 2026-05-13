#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> arr (n);
        for(int i=0; i<n; i++)
            cin>>arr[i];

        long long sum = 0;
        for (int i = 1; i < n; i++)
            sum += llabs(arr[i] - arr[i - 1]);

        long long ans = sum;

        for (int k = 0; k < n; k++) {
            long long cur = sum;
            if (k == 0) {
                cur -= llabs(arr[1] - arr[0]);
            } else if (k == n - 1) {
                cur -= llabs(arr[n - 1] - arr[n - 2]);
            } else {
                cur -= llabs(arr[k] - arr[k - 1]);
                cur -= llabs(arr[k + 1] - arr[k]);
                cur += llabs(arr[k + 1] - arr[k - 1]);
            }
            ans = min(ans, cur);
        }
        
        cout<<ans<<endl;
    }
    
    return(0);
}