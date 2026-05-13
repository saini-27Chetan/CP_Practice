#include <bits/stdc++.h>
using namespace std;

void process(){
    int n,h,l;
    cin>>n>>h>>l;

    int  countH=0, countL=0;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]<=h)
            countH++;
        if(a[i]<=l)
            countL++;
    }

    int useful = max(countH, countL);
    
    cout<<min({countH, countL, useful>>1})<<"\n";
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