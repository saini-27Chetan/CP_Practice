#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<ll>arr_2,arr_3,arr_6,arr_none,res;
    for(auto x:a){
        if(x%2==0 && x%3==0)
            arr_6.push_back(x);
        else if(x%2==0)
            arr_2.push_back(x);
        else if(x%3==0)
            arr_3.push_back(x);
        else    
            arr_none.push_back(x);
    }

    res.insert(res.end(), arr_6.begin(), arr_6.end());
    res.insert(res.end(), arr_2.begin(), arr_2.end());
    res.insert(res.end(), arr_none.begin(), arr_none.end());
    res.insert(res.end(), arr_3.begin(), arr_3.end());

    for(auto x:res)
        cout<<x<<" ";
    cout<<"\n";
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