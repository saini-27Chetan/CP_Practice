#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    vector<long> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int i=n-2, count=0;
    while(i>=0){
        while(a[i]>=a[i+1]){
            a[i] >>= 1;
            count++;
            if(a[i]==0)
                break;
        }
        if(a[i]==0 && a[i+1]==0){
            count=-1;
            break;
        }
        i--;
    }

    cout<<count<<endl;
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