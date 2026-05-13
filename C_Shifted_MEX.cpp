#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int maxSeq = 0;
        int seq = 0;

        for (int i = 0; i < a.size(); i++) {
            if (i > 0 && a[i] == a[i - 1] + 1)
                seq++;
            else
                seq = 1;
            maxSeq = max(maxSeq, seq);
        }

        cout << (a.empty() ? 0 : maxSeq) << endl;
    }
    return 0;
}