#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int>& a){
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        int odd=0;
        for(auto x:a){
            if(x&1)
                odd++;
        }

        if(odd==n || odd==0)
            printArr(a);
        else{
            sort(a.begin(),a.end());
            printArr(a);
        }
    }
    return(0);
}