#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n,d,res=0;
    cin>>n>>d;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());
    int j=n-1, i=0;
    while(j>=i){
        int div=d/arr[j];
        if((div+1)*arr[j]>d){
            if((i+div)<=j){
                i+=div;
                res++;
            }
        }
        j--;
    }
    cout<<res<<endl;
    return;
}

int main(){
    performTask();
    return(0);
}
