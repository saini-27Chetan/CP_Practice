#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int cnt1=0, cnt2=0;
    for(auto x:str)
            (x=='(')? cnt1++ : cnt2++;
    
    if(cnt1==cnt2)
        cout<<"YES\n";
    else    
        cout<<"NO\n";
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