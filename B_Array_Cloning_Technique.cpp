#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    unordered_map<int, int> hash;
    int maxEle=INT_MIN, freq=INT_MIN; 
    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        hash[num]++;

        if(hash[num]>freq){
            maxEle=num;
            freq=hash[num];
        }
    }

    int low=n-freq;
    int res=0;
    while(low){
        res+=1;  
        if(freq<=low){
            res+=freq;   
            low-=freq;
            freq<<=1;
        }
        else{
            res+=low;  
            low=0;
        }
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