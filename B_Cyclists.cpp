#include <bits/stdc++.h>
using namespace std;

void helper(){
    int n, k, p, m;
    cin>>n>>k>>p>>m;

    deque<int> dq;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        if(i==p)
            dq.push_back(-(x));
        else
            dq.push_back(x);
    }

    int cnt=0;
    while(m){
        vector<int> arr;
        int minimunm=INT_MAX;
        for(int i=1; i<=k; i++){
            int x = dq.front();
            dq.pop_front();
            if(minimunm > x)
                minimunm = x;
            
            arr.push_back(x);
        }

        bool flag=0;
        for(int i=arr.size()-1; i>=0; i--){
            if(!flag && arr[i]==minimunm){
                dq.push_back(arr[i]);
                flag=1;
            }
            else
                dq.push_front(arr[i]);
        }

        int cost = abs(minimunm); 

        if(m >= cost){    
            if(minimunm < 0)
                cnt++;
            m -= cost;          
        }
        else    
            break;
    }
    cout<<cnt<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return(0);
}