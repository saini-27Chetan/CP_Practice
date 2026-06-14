#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,r,b;
    cin>>n>>r>>b;
   
    string res;
    int redCnt=r/(b+1), redLeft=r%(b+1);

    for(int i=1; i<=(b+1); i++){
        for(int j=0; j<redCnt; j++)
            res+='R';

        if(redLeft>0){
            res+='R';
            redLeft--;
        }

        if(i!=(b+1))
            res+='B';
    }
    
    cout<<res<<"\n";
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
    
