#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    if(n&1){
        cout<<"4\n";
        cout<<"1 "<<n-1<<endl;
        cout<<"1 "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        cout<<"2\n";
        cout<<"1 "<<n<<endl;
        cout<<"1 "<<n<<endl;
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