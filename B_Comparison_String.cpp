#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ansSeq=1;
    int seq=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])
            seq++;
        else{
            ansSeq=max(ansSeq, seq);
            seq=1;
        }
    }
    ansSeq=max(ansSeq, seq);
    cout<<ansSeq+1<<endl;
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