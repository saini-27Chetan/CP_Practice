#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans=0;
    int seg=0;
    for(int i=0; i<n; i++){
        if(s[i]=='.')
            seg++;
        else{
            if(seg<3)
            ans+=seg;
            seg=0;
        }   
        if(seg>=3){
            ans=2;
            break;
        }
    }
    if(seg>0 && seg<3)
        ans+=seg;

    cout<<ans<<endl;
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
