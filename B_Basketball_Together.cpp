#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n, d, ans=0;
    cin>>n>>d;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());
    int j=n-1, i=0;
    while(j>=i){
        int div = d/a[j];
        if((div+1)*a[j] > d){
            if((i+div)<=j){
                i+=div;
                ans++;
            }
        }
        j--;
    }
    cout<<ans<<endl;
    return;
}

int main(){
    process();
    return(0);
}