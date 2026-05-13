#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int spIdx;
    cin>>spIdx;
    int x=a[spIdx-1];

    int l=0, r=n-1, ans=0;
    
    vector<int> b (a.begin(), a.end());
    for(int i=0; i<n; i++)
        b[i]=(b[i]==0)?1:0;

    bool flag=0;    // 0->a and 1->b
    while(l<=r){
        while(l<spIdx-1 && ((!flag && a[l]==x) || (flag && b[l]==x)))
            l++;
        while(r>spIdx-1 && ((!flag && a[r]==x) || (flag && b[r]==x)))
            r--;

        if(l==r && ((!flag && a[l]==x) || (flag && b[l]==x)))
            break;
        
        flag = !flag;
        ans++;
    }
    cout<<ans<<"\n";
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