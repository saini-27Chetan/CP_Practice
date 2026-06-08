#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    char ch;
    string str;
    cin>>n>>ch>>str;
    
    if(ch=='g'){
        cout<<0<<"\n";
        return;
    }

    int res=0, pos=-1;
    string temp=str+str;
    for(int i=(2*n-1); i>=0; i--){
        if(temp[i]=='g')
            pos=i;

        if(i<n && pos!=-1 && temp[i]==ch)
            res=max(res,(pos-i));
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
