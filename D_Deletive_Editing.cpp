#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    string s, t;
    cin>>s>>t;

    int x=t.length();
    int y=s.length();
    
    vector<int> freq(26, 0);
	for (int i=0; i<x; i++) 
		freq[t[i]-'A']++;    

    for(int i=y-1; i>=0; i--){
        if(freq[s[i]-'A']>0)
            freq[s[i]-'A']--;
        else
            s[i]='.';
    }

    string res="";
    for(int i=0; i<y; i++){
        if(s[i]!='.')
            res+=s[i];
    }

    if(res==t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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