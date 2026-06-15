#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"0\n";
        return;
    }

    int t=n-1, p=0;
    while(t>1){
        t>>=1;
        p++;
    }
    t=pow(2,p);

    for(int i=1; i<t; i++)
        cout<<i<<" ";
    cout<<"0"<<" "<<t<<" ";

    for(int i=t+1; i<n; i++)
        cout<<i<<" ";
    cout<<"\n"; 
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
