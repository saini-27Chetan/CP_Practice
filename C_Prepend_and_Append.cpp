#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(s.length()!=n){
        cout<<"-1\n";
        return;
    }

    int i=0,j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            i++;
            j--;
        }
        else{
            break;
        }
    }
    if(j<i)
        cout<<"0\n";
    else
        cout<<(j-i+1)<<"\n";
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

