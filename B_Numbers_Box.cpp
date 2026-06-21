#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,m;
    cin>>n>>m;

    int neg=0, sum=0, minVal=INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;

            sum+=abs(x);
            minVal=min(minVal, abs(x));
            if(x<0)
                neg++;
        }
    }

    if(neg%2!=0)
        sum-=(minVal<<1);
    
    cout<<sum<<"\n";
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