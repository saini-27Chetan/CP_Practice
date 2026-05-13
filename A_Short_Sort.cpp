#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    string str;
    cin>>str;

    if(str[0]=='a' || str[1]=='b' || str[2]=='c')
        cout<<"YES\n";
    else    
        cout<<"NO\n";
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