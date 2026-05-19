#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    string str;
    cin>>str;

    if(str[0]!=str[str.length()-1]){
        if(str[0]=='a')
            str[0]='b';
        else
            str[0]='a';
    }
    cout<<str<<"\n";
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