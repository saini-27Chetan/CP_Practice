#include <bits/stdc++.h>
using namespace std;

void process(){
    string s, t;
    cin>>s>>t;

    int len_t = t.length();
    int len_s = s.length();
    
    vector<int> freq(26, 0);
	for (int i = 0; i < len_t; i++) 
		freq[t[i] - 'A']++;    

    for(int i=len_s-1; i>=0; i--){
        if(freq[s[i]-'A']>0)
            freq[s[i]-'A']--;
        else
            s[i]='.';
    }

    string ans="";
    for(int i=0; i<len_s; i++){
        if(s[i]!='.')
            ans+=s[i];
    }

    if(ans==t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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