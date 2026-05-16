#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n;
    cin>>n;
    vector<int>a(n);
    int zero, one, two;
    zero=one=two=0;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0)
            zero++;
        else if(a[i]==1)
            one++;
        else
            two++;
    }
        
    int res=0;
    res+=zero;
    if(two<=one){
        res+=two;
        one-=two;
        res+=(one/3);
    }
    else{
        res+=one;
        two-=one;
        res+=(two/3);
    }  
    cout<<res<<"\n";
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