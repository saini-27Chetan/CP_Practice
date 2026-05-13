#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;
    vector<int> a(n);
    int countZero = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]==0)
            countZero++;    
    }

    if(countZero==n){
        cout<<"0\n";
        return;
    }

    int left=0, right=n-1;
    while(a[left]==0 && left<n)
        left++;
    while(a[right]==0 && right>=0)
        right--;

    bool flag=0;
    for(int i=left; i<=right; i++){
        if(a[i]==0){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"2\n";
    else
        cout<<"1\n";
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