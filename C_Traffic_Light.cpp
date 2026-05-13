#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    
    if(ch=='g') {
        cout<<0<<"\n";
        return;
    }

    int ans=0, pos=-1;
    string temp = s+s;
    for(int i=(2*n-1); i>=0; i--){
        if(temp[i]=='g')
            pos=i;

        if(i<n && pos!=-1 && temp[i]==ch)
            ans = max(ans, (pos-i));
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