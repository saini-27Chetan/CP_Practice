#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(){
    ll a, b, c, m;
    cin>>a>>b>>c>>m;

    ll ABC = m/lcm(a, lcm(b,c));

    ll AB = m/lcm(a,b)-ABC;
    ll BC = m/lcm(b,c)-ABC;
    ll AC = m/lcm(a,c)-ABC;
    
    ll A = m/a - (ABC + AB + AC);
    ll B = m/b - (ABC + AB + BC);
    ll C = m/c - (ABC + AC + BC);

    ll capA = (ABC*2) + (AB*3) + (AC*3) + (A * 6);
    ll capB = (ABC*2) + (AB*3) + (BC*3) + (B * 6);
    ll capC = (ABC*2) + (AC*3) + (BC*3) + (C * 6);

    cout<<capA<<" "<<capB<<" "<<capC<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return(0);
}