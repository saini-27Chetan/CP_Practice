#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"0\n";
        return;
    }

    int temp=n-1, power=0;
    while(temp>1){
        temp>>=1;
        power++;
    }
    temp=pow(2,power);

    for(int i=1; i<temp; i++)
        cout<<i<<" ";
    cout<<"0"<<" "<<temp<<" ";

    for(int i=temp+1; i<n; i++)
        cout<<i<<" ";
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