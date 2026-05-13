#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(b.begin(), b.end());

        string s;
        cin >> s;

        map<long long, int> firstTimeReached;
        long long currentShift = 0;
        for (int i = 1; i <= k; i++){
            if (s[i - 1] == 'L')
                currentShift--;
            else
                currentShift++;

            if (firstTimeReached.find(currentShift) == firstTimeReached.end())
                firstTimeReached[currentShift] = i;
        }

        vector<int> deathCount(k + 2, 0);
        for (int i = 0; i < n; i++){
            long long pos = a[i];

            auto it = lower_bound(b.begin(), b.end(), pos);
            int timeToDie = k + 1;

            if (it != b.end()){
                long long dist = *it - pos;
                if (firstTimeReached.count(dist))
                    timeToDie = min(timeToDie, firstTimeReached[dist]);
            }
            if (it != b.begin()){
                long long dist = *(--it) - pos;
                if (firstTimeReached.count(dist))
                    timeToDie = min(timeToDie, firstTimeReached[dist]);
            }

            if (timeToDie <= k)
                deathCount[timeToDie]++;
        }

        int currentlyAlive = n;
        for (int i = 1; i <= k; i++){
            currentlyAlive -= deathCount[i];
            cout << currentlyAlive << (i == k ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}