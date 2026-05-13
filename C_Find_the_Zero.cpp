#include <bits/stdc++.h>
using namespace std;
#define ll long long

int query(int a, int b){
    cout<<"? "<<a<<" "<<b<<"\n";
    int res;
    cin>>res;

    if(res==-1)
        exit(0);

    return res;
}

void process(){
    int n;
    cin>>n;

    int ans=-1;

    if(query(1, 2)==1) 
        ans=1;
    else if(query(2, 3)==1) 
        ans=2;
    else if(query(3, 1)==1) 
        ans=3;
    
    if(ans==-1){
        for(int i=1; i<=n-2; i++){
            int a=2*i+2;
            int b=2*i+3;
            if(query(a, b)==1){
                ans=a;
                break;
            }
        }
    }
    if(ans==-1)
        ans=n<<1;

    cout<<"! "<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}