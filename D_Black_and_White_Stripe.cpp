#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    int b=0, w=0, minAns=INT_MAX;
    for(int i=0; i<k; i++){
        if(str[i]=='B')
            b++;
        else    
            w++;
    }

    minAns=w;
    for(int r=k; r<n; r++){
        int l=r-k;
        if(str[l]=='B')
            b--;
        else if(str[l]=='W')
            w--;

        if(str[r]=='B')
            b++;
        else if(str[r]=='W')
            w++;

        minAns=min(minAns, w);
    }
    cout<<minAns<<"\n";
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
