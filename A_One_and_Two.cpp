#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n), cntPrefix(n), cntSuffix(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    cntPrefix[0]=(a[0]==2)? 1:0;
    cntSuffix[n-1]=(a[n-1]==2)? 1:0;
    for(int i=1; i<n; i++){
        int j=(n-1-i);
        if(a[j]==2)
            cntSuffix[j]=cntSuffix[j+1]+1;
        else
            cntSuffix[j]=cntSuffix[j+1];

        if(a[i]==2)
            cntPrefix[i]=cntPrefix[i-1]+1;
        else
            cntPrefix[i]=cntPrefix[i-1];
    }

    bool check=false;
    int i;
    for(i=0; i<n; i++){
        if(cntPrefix[i]==cntSuffix[i+1]){
            check=1;
            break;
        }
    }

    if(check)
        cout<<(i+1)<<endl;
    else
        cout<<"-1\n";
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