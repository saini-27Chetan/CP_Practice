#include <bits/stdc++.h>
using namespace std;

void helper(){
    int n;
    cin>>n;
    vector<pair<int, int>> arr;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;

        arr.push_back({x, y});
    }

    double finalPts = 0.0;
    for(int i=n-1; i>=0; i--){
        double not_take = finalPts;
        double take = arr[i].first + (finalPts * (1.0 - (arr[i].second/100.0)));
        finalPts = max(not_take, take);
    }

    cout<<fixed<<setprecision(10)<<finalPts<<"\n";
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