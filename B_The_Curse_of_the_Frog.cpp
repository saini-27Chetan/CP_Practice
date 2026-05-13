#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, x;
    cin >> n >> x;

    ll maxFree = 0;
    ll bestGain = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        maxFree += a * (b - 1);
        bestGain = max(bestGain, a * b - c);
    }

    if (maxFree >= x) {
        cout << 0 << "\n";
        return;
    }

    if (bestGain <= 0) {
        cout << -1 << "\n";
        return;
    }

    ll need = x - maxFree;
    ll ans = (need + bestGain - 1) / bestGain;

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}