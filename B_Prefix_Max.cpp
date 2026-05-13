#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        int maxId = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];

            if(i==0)
                continue;

            if(a[i]>a[maxId])
                maxId = i;
        }

        cout<<n*a[maxId]<<endl;

    }
    return(0);
}