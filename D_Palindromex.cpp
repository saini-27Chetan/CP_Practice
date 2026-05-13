#include <bits/stdc++.h>
using namespace std;
#define ll long long

int helper(vector<int>&a,int l,int r,int n){
    while(l>=0&&r<(n<<1)&&a[l]==a[r]){
        l--;
        r++;
    }
    l++;
    r--;
    
    if(l>r)
        return 0;
    
    vector<bool>present(n+1,false);
    for(int i=l;i<=r;i++){
        if(a[i]<=n)
            present[a[i]]=true;
    }
    
    int mex=0;
    while(present[mex])
        mex++;
    return mex;
}

void process(){
    int n;
    cin>>n;
    vector<int>a(n<<1);
    
    int x=-1,y=-1;
    for(int i=0;i<(n<<1);i++){
        cin>>a[i];
        if(a[i]==0){
            if(x==-1)
                x=i;
            else 
                y=i;
        }
    }

    int res=0;
    res=max(res,helper(a,x,x,n));
    res=max(res,helper(a,y,y,n));
    res=max(res,helper(a,(x+y)/2,(x+y+1)/2,n));

    cout<<res<<"\n";
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