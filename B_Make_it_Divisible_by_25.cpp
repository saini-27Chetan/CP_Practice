#include <bits/stdc++.h>
using namespace std;

void process(){
    long long n;
    cin>>n;

    long long ans=0;
    vector<int> d; 
    
    while(n){
        int rem = n%10;
        d.push_back(rem);
        n/=10;
    }

    bool zero=0, five=0;
    for(int i=0; i<d.size(); i++){
        if((d[i]==2 || d[i]==7) && five){
            if(zero)
                ans++;
            break;
        }
        
        if((d[i]==0 || d[i]==5) && zero){
            if(five)
                ans++;
            break;
        }

        if(d[i]==5 && !five){
            five=1;
            continue;
        }
        else if(d[i]==0 && !zero){
            zero=1;
            continue;
        }
        
        ans++;
    }
    cout<<ans<<"\n";
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