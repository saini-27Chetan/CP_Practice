#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++)
    cin>>a[i];
    
    for(int i=0; i<n; i++){
        int maxx=0, minn=0;
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
                minn++;
            else if(a[i]<a[j])
                maxx++;
        }
        cout<<max(maxx, minn)<<" ";
    }
    cout<<"\n";
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