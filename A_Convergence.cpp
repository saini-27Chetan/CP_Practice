#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());
    int mid=(n-1)>>1;

    int cnt=0;
    for(int i=0; i<mid; i++){
        if(a[i]==a[mid])
            break;
        cnt++;
    }

    int cnt2=0;
    for(int i=mid+1; i<n; i++){
        if(a[i]==a[mid])
            continue;;
        cnt2++;
    }

    cout<<max(cnt,cnt2)<<"\n";
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