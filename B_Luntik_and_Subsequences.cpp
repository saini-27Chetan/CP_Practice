#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    int count0=0, count1=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==0)
            count0++;
        if(a[i]==1)
            count1++;
    }

    cout<<(long long)(count1*(long long)(pow(2, count0)))<<"\n";
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