#include <bits/stdc++.h>
using namespace std;

void process(){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    int st=0, i;
    int problems = INT_MAX;
    for(i=1; i<n; i++){
        if(abs(a[i]-a[i-1])>k){
            problems = min(problems, (n - (i-1-st+1)));
            st=i;
        }
    }
    problems = min(problems, (n - (i-1-st+1)));
    cout<<problems<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}