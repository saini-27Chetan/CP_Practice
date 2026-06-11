#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int res=0, lPrev=a[0]-x, rPrev=a[0]+x;
    for(int i=1; i<n; i++){
        int lCurr=a[i]-x, rcurr=a[i]+x;
        int lOverlap=max(lCurr, lPrev), rOverlap=min(rcurr, rPrev);

        if(lOverlap>rOverlap){
            res++;
            lPrev=lCurr;
            rPrev=rcurr;
        }
        else{
            lPrev=lOverlap;
            rPrev=rOverlap;
        }
    }
    cout<<res<<"\n";
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
