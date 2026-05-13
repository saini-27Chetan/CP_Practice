#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, d;
        cin >> n >> d;

        vector<int> a(n);
        ll hard = 0, easy = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            a[i] == 0 ? hard++ : easy++;
        }

        d *= 60;
        ll ans = 0;
        ll cntEasy = d / 30;
        ll cntHard = d / 120;

        ans = min(cntEasy, easy);
        cntHard = min(cntHard, hard);

        for (int i = 1; i <= cntHard; i++){
            ll rem = d - i * 120;
            cntEasy = rem / 15;
            if (cntEasy > easy)
                cntEasy = easy;

            ans = max(ans, i + cntEasy);
        }
        cout << ans << endl;
    }
    return 0;
}