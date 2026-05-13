#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pib pair<int, bool>

void performTask(){
    int n;
    cin>>n;
    int oddCount=0;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(num%2!=0) {
            oddCount++;
        }
    }

    if(oddCount%2==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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