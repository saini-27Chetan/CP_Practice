#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int changes=0, prevL= a[0]-x, prevR=a[0]+x;
    for(int i=1; i<n; i++){
        int currL=a[i]-x, currR=a[i]+x;
        int overlapL=max(currL, prevL), overlapR=min(currR, prevR);

        if(overlapL>overlapR){
            changes++;
            prevL=currL;
            prevR=currR;
        }
        else{
            prevL=overlapL;
            prevR=overlapR;
        }
    }
    cout<<changes<<"\n";
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