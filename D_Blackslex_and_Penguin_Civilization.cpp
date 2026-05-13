#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int N = 1 << n;
        set<int> unused;
        for (int i = 0; i < N; i++) unused.insert(i);

        vector<int> ans;
        int cur = (1 << n) - 1;

        while (!unused.empty()) {
            bool found = false;
            for (int x : unused) {
                if ((x & cur) == cur) {
                    ans.push_back(x);
                    unused.erase(x);
                    cur &= x;
                    found = true;
                    break;
                }
            }

            if (!found) {
                int x = *unused.begin();
                ans.push_back(x);
                unused.erase(x);
                cur &= x;
            }
        }

        for (int x : ans) 
            cout << x << " ";
        
        cout << "\n";
    }
    return 0;
}
