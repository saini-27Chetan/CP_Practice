#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> v(n);
    int minDiff = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>v[i];

        int diff = abs(v[i]);
        minDiff = (minDiff < diff)? minDiff : diff; 
    }

    cout<<minDiff<<endl;
    return;
}

int main(){
    performTask();
    return(0);
}
