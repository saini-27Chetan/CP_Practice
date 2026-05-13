#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int>a(n);
    int cnt_neg, cntpos;
    cnt_neg=cntpos=0;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==-1)
            cnt_neg++;
        else
            cntpos++;
    }

    int res=0; 
    while (cntpos<cnt_neg || cnt_neg&1) {
        res++; 
        cntpos++;
        cnt_neg--;
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