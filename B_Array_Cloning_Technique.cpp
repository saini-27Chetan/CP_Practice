#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    unordered_map<int, int> mp;
    int maxNum=INT_MIN, maxFreq = INT_MIN; 
    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        mp[num]++;

        if(mp[num]>maxFreq){
            maxNum = num;
            maxFreq = mp[num];
        }
    }

    int left = n - maxFreq;
    int ans=0;
    while(left){
        ans+=1;   // for copy
        if(maxFreq<=left){
            ans+=maxFreq;   // for swaps
            left -= maxFreq;
            maxFreq <<= 1;
        }
        else{
            ans+=left;  // for swaps
            left=0;
        }
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