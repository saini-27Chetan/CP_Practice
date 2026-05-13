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

    int i;
    for(i=0; i<s.length(); i++){
        if(s[i]=='0' && count1)
            count1--;
        else if(s[i]=='1' && count0)
            count0--;
        else if(count1==0 || count0==0)
            break;
    }

    cout<<s.length()-i<<"\n";
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