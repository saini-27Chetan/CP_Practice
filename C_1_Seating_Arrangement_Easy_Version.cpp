#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,x,s;
    cin>>n>>x>>s;
    string u;
    cin>>u;
    
    vector<int> temp(x+1, -1);
    temp[0]=0; 
    
    for(char c:u){
        vector<int> temp2=temp;
        for(int k=0; k<=x; k++){
            if(temp[k]==-1) 
                continue;
            
            if((c=='I' || c=='A') && k<x)
                temp2[k+1]=max(temp2[k+1], temp[k]+1);
            
            ll prod=(ll)k*s; 
            if((c=='E' || c=='A') && temp[k]<prod)
                temp2[k]=max(temp2[k], temp[k]+1);
        }
        temp=temp2;
    }
    
    int ans=0;
    for(int k=0; k<=x; k++){
        ans=max(ans,temp[k]);
    }
    cout<<ans<<"\n";
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