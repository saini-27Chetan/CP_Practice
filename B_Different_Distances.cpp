#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> ans;
    if(n%2==0){
        for(int i=1; i<=n; i++) 
            ans.push_back(i);
        for(int i=1; i<=n; i++) 
            ans.push_back(i);
        for(int i=n; i>=1; i--) 
            ans.push_back(i);
        for(int i=1; i<=n; i++) 
            ans.push_back(i);
    }
    else{
        vector<int> base={1,1,2,1,2,3,1,3,2,2,3,3};
        for(int x:base) 
            ans.push_back(x);

        for(int i=4; i<=n; i++) 
            ans.push_back(i);
        for(int i=4; i<=n; i++) 
            ans.push_back(i);
        for(int i=n; i>=4; i--) 
            ans.push_back(i);
        for(int i=4; i<=n; i++) 
            ans.push_back(i);
    }

    for(int x:ans) 
        cout << x << " ";
    cout << '\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}