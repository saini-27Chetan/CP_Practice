#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int> &b, int n){
    int xorA = 0, xorB = 0;
    for (int x : a)
        xorA ^= x;
    for (int x : b)
        xorB ^= x;

    if (xorA == xorB)
        return -1;

    int x = -1;
    for (int i = 0; i < n; i++){
        if (a[i] != b[i])
            x = i;
    }

    if (x % 2 == 0)
        return 0;

    return 1;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = solve(a, b, n);

        if (ans == -1)
            cout << "Tie\n";
        else if (ans == 0)
            cout << "Ajisai\n";
        else
            cout << "Mai\n";
    }
    return 0;
}
