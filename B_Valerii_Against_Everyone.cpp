#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    unordered_set<int>st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        st.insert(x);
    }

    if(st.size()<n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}