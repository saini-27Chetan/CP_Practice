#include <bits/stdc++.h>
using namespace std;

bool check(int r, int g, int b, int w){
    int odd=0; int even=0;
    (r&1)?odd++:even++;
    (g&1)?odd++:even++;
    (b&1)?odd++:even++;
    (w&1)?odd++:even++;

    if((even==4 && odd==0) || (even==3 && odd==1))
        return 1;
    
    return 0;
}

bool colorBalls(int r, int g, int b, int w)
{
    if (check(r, g, b, w)) return true;

    if (r >= 1 && g >= 1 && b >= 1) {
        if (check(r - 1, g - 1, b - 1, w + 3)) 
            return 1;
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        cout << (colorBalls(r, g, b, w) == 1 ? "Yes" : "No") << endl;
    }
    return 0;
}