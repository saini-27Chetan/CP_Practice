#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int maxSeq = 1;
    int seq=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])
            seq++;
        else{
            maxSeq = max(maxSeq, seq);
            seq=1;
        }
    }
    maxSeq = max(maxSeq, seq);
    cout<<maxSeq+1<<endl;

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