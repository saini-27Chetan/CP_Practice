#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n,r,b;
    cin>>n>>r>>b;
   
    string ans;
    int numOfRed=r/(b+1), leftR=r%(b+1);

    for(int i=1; i<=(b+1); i++){
        for(int j=0; j<numOfRed; j++)
            ans+='R';

        if(leftR>0){
            ans+='R';
            leftR--;
        }

        if(i!=(b+1))
            ans+='B';
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