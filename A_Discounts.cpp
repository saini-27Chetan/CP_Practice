#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        vector<int> b(k);
        for (auto &x : b)
            cin >> x;

        sort(a.begin(), a.end(), greater<long long>());
        sort(b.begin(), b.end());

        long long ans = 0;
        int idx = 0;

        for (int i = 0; i < k && idx < n; i++)
        {
            int x = b[i];
            for (int j = 0; j < x - 1 && idx < n; j++)
                ans += a[idx++];
            idx++;
        }

        while (idx < n)
            ans += a[idx++];

        cout << ans << "\n";
    }
    return (0);
}