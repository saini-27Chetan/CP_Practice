#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;

    int first=ceil((n*1.0)/(x+y));
    int second=0;
    int temp=z*x;

    if(temp>=n)
        second=ceil((n*1.0)/x);
    else {
        n-=temp;
        int sp=x+(10*y);
        int hrs=ceil((n*1.0)/sp);
        second=z+hrs;
    }

    cout<<min(first, second)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}