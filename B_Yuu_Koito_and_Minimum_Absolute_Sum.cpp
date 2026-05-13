#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == -1 && a[n - 1] == -1)
            a[0] = a[n - 1] = 0;

        else if (a[0] == -1)
            a[0] = a[n - 1];

        else if (a[n - 1] == -1)
            a[n - 1] = a[0];

        long long sum = 0;
        for (int i = 1; i < n; i++){
            if (a[i] == -1)
                a[i] = 0;

            sum += a[i] - a[i - 1];
        }

        cout << llabs(sum) << endl;
        for (auto x : a)
            cout << x << " ";

        cout << endl;
    }
    return (0);
}