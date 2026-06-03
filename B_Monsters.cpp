#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>

struct cmp {
    bool operator()(const pii& a, const pii& b) const {
        if (a.first == b.first)
            return a.second > b.second;  // smaller index first
        return a.first < b.first;        // larger value first
    }
};

void performTask(){
    ll n, k;
    cin>>n>>k;

    priority_queue<pii, vector<pii>, cmp> pq;

    vector<ll> ans;
    for(int i=0; i<n; i++){
        ll val;
        cin>>val;
        if(val>k)
            val %= k;

        if(val==0)
            val = k;

        pq.push({val, i+1});
    }

    while(!pq.empty()){
        pair<ll, ll> p = pq.top();
        pq.pop();
        p.first -= k;
        if(p.first<=0)  
            ans.push_back(p.second);
        else
            pq.push(p);
    }
    for(auto x: ans)
        cout<<x<<" ";
    cout<<"\n";
    return;
}


// TLE ELIMINATOR's CODE
// void performTask2(){
//     ll n, k;
//     cin >> n >> k;

//     vector<pair<ll,ll>> v;

//     for(int i = 0; i < n; i++){
//         ll val;
//         cin >> val;
//         ll rem = val % k;
//         if(rem == 0) 
//             rem = k;
//         v.push_back({rem, i + 1});
//     }

//     sort(v.begin(), v.end(), [](auto &a, auto &b){
//         if(a.first == b.first)
//             return a.second < b.second; // smaller index first
//         return a.first > b.first;       // larger remainder first
//     });

//     for(auto &p : v)
//         cout << p.second << " ";
//     cout << "\n";
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}
