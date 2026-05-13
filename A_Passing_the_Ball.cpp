#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    
    int cnt=1;
    for(int i=0; i<n; i++){
        if(str[i]=='L')
            break;

        cnt++;
    }
    cout<<cnt<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return(0);
}