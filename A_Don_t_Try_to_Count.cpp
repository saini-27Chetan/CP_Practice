#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,m;
    cin>>n>>m;

    string x,s;
    cin>>x>>s;

    int cnt=0;
    bool flag=0;
    int it=0;
    // Given: 1<=n*m<=25, so log2(25) approx = 5, for safer side checking till 6
    while(it++<=6){
        if(x.find(s)!=string::npos){
            flag=1;
            break;
        }
        cnt++;
        x+=x;
    }
    if(flag)
        cout<<cnt<<"\n";
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