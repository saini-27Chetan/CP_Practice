#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    string s;
    cin>>s;

    int cnt0=0, cnt1=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')
            cnt0++;
        else    
            cnt1++;
    }

    int i;
    for(i=0; i<s.length(); i++){
        if(s[i]=='0' && cnt1)
            cnt1--;
        else if(s[i]=='1' && cnt0)
            cnt0--;
        else if(cnt1==0 || cnt0==0)
            break;
    }

    cout<<s.length()-i<<"\n";
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
