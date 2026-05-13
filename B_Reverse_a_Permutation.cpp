#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    vector<int> a(n), suffix(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    suffix[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--)
        suffix[i] = max(suffix[i+1], a[i]);

    int l=-1, r=-1, maxEle=INT_MIN;
    for(int i=0; i<n; i++){
        if(suffix[i]==a[i])
            continue;
        else{
            maxEle = suffix[i];
            l=i;
            break;
        }        
    }

    if(l == -1){
        for(int x : a) 
            cout << x << " ";
        cout << "\n";
        return;
    }

    r = l;
    while((r+1)<n && suffix[r+1]==maxEle)
        r++;

    int j=r, middle = (l+(r-l)/2);
    for(int i=l; i<=middle; i++){
        int temp = a[r];
        a[r]=a[i];
        a[i]=temp;
        r--;
    }

    for(auto x: a)
        cout<<x<<" ";
    cout<<"\n";
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