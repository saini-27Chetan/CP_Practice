#include <bits/stdc++.h>
using namespace std;
 
void performTask(){
    string str;
    cin>>str;
 
    int cnt0,cnt1;
    cnt0=cnt1=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='0')
            cnt0++;
        else
            cnt1++;
    }
 
    int minCnt=min(cnt0,cnt1);
    cout<<((minCnt&1)? "DA":"NET")<<"\n";
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
