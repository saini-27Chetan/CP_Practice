#include <bits/stdc++.h>
using namespace std;

void process(){
    string s;
    cin>>s;

    int count0=0, count1=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')
            count0++;
        else
            count1++;
    }

    int minCount = min(count0, count1);
    cout<<((minCount&1)? "DA":"NET")<<"\n";
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