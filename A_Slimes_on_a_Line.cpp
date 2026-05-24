#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int maxEle=*max_element(a.begin(), a.end());
    int minEle=*min_element(a.begin(), a.end());

    int mid=minEle+((maxEle-minEle)>>1);
    cout<<max((maxEle-mid), (mid-minEle))<<"\n";
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