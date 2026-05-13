#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int x,k;
    cin>>x>>k;

    vector<int> res;
    int i=x;
    while(i>0){
        if(i%k==0)
            i--;
        else if(i==x){
            res.push_back(i);
            break;
        }
        else if((x-i)%k!=0){
            res.push_back(i);
            res.push_back(x-i);
            break;
        }
    }

    cout<<res.size()<<endl;
    for(auto x: res)
        cout<<x<<" ";

    cout<<endl;
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
