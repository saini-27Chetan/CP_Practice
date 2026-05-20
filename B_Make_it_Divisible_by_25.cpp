#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll n;
    cin>>n;

    ll res=0;
    vector<int> d; 
    
    while(n){
        int rem=n%10;
        d.push_back(rem);
        n/=10;
    }

    bool flag_0=0, flag_5=0;
    for(int i=0; i<d.size(); i++){
        if((d[i]==2 || d[i]==7) && flag_5){
            if(flag_0)
                res++;
            break;
        }
        
        if((d[i]==0 || d[i]==5) && flag_0){
            if(flag_5)
                res++;
            break;
        }

        if(d[i]==5 && !flag_5){
            flag_5=1;
            continue;
        }
        else if(d[i]==0 && !flag_0){
            flag_0=1;
            continue;
        }
        res++;
    }
    cout<<res<<"\n";
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