#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    unordered_map<int, int> m_a, m_b;
    for(ll i=0; i<n; i++)
        cin>>a[i];

    for(ll i=0; i<n; i++)
        cin>>b[i];

    int len=1;
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1])
            len++;
        else{
            m_a[a[i-1]] = max(m_a[a[i-1]], len);
            len=1;
        }
    }
    m_a[a[n-1]] = max(m_a[a[n-1]], len);
    
    len=1;
    for(int i=1; i<n; i++){
        if(b[i]==b[i-1])
            len++;
        else{
            m_b[b[i-1]] = max(m_b[b[i-1]], len);
            len=1;
        }
    }
    m_b[b[n-1]] = max(m_b[b[n-1]], len);

    int ans = 0;
    for(auto &x : m_a)
        ans = max(ans, x.second);

    for(auto &x : m_b)
        ans = max(ans, x.second);

    for(auto &x : m_a){
        if(m_b.count(x.first))
            ans = max(ans, x.second + m_b[x.first]);
    }

    cout<<ans<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}