#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printArr(vector<int> arr){
    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
}

void performTask(){
    int n;
    cin>>n;
    vector<int>a(n), b, c;
    for(int i=0; i<n; i++)
        cin>>a[i];

    int maxEle=*max_element(a.begin(), a.end());
        
    for(int i=0; i<n; i++){
        if(a[i]==maxEle)
            c.push_back(a[i]);
        else
            b.push_back(a[i]);
    }

    if(b.size()==0 || c.size()==0)
        cout<<"-1\n";
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        printArr(b);
        printArr(c);
    }
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
