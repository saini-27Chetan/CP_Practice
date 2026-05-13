#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long totalFlips = m / k;
        long long lastFlipTime = totalFlips * k;
        long long time = m - lastFlipTime;

        long long remaining;
        if (totalFlips == 0)
            remaining = s;
        else
            remaining = min(s, k);

        long long ans = remaining - time;
        cout << max(0LL, ans) << "\n";
    }
    return 0;
}