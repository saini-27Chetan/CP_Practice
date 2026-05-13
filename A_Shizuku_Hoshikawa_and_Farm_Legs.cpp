#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        if (n & 1){
            cout << "0" << endl;
            continue;
        }
        int X = n / 2, cnt = 0;
        for (int i = 0; i <= X / 2; i++)
            cnt++;
            
        cout << cnt << endl;
    }
    return (0);
}