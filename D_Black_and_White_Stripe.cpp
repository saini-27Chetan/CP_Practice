#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int b=0, w=0, minCnt=INT_MAX;
    for(int i=0; i<k; i++){
        if(s[i]=='B')
            b++;
        else    
            w++;
    }

    minCnt=w;
    for(int r=k; r<n; r++){
        int l=r-k;
        if(s[l]=='B')
            b--;
        else if(s[l]=='W')
            w--;

        if(s[r]=='B')
            b++;
        else if(s[r]=='W')
            w++;

        minCnt=min(minCnt, w);
    }
    cout<<minCnt<<"\n";
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