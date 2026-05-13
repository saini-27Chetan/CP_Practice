#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(){
    int n;
    cin>>n;

    vector<int> arr(n), temp(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(i==0)
            temp[i] = arr[i];

        else
            temp[i] = max(arr[i], temp[i-1]);
    }

    int cnt=0;
    for(int i=n-1; i>=0; i--){
        if(temp[i]==arr[i])
            cnt++;
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