#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int n;
    cin>>n;

    vector<int> a(n);
    
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    // gcd(a,b) <= min(a,b) ---- V.V. IMP

    bool check=false;
    for(int i=0; i<n-1; i++){    // O(n) 
        for(int j=i+1; j<n; j++){   // O(n)
            if(__gcd(a[i],a[j])<=2){    // O(log2(min(a[i],a[j]))) 
                check=true;
                break;
            }
        }
    }
    if(!check)
        cout<<"No\n";
    else
        cout<<"Yes\n";
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
// Time limit per test = 1 sec
// 1 sec = 10^8 operations

// Total test cases = 500
// No of operations per testcase = 10^8 / 500 = 2 * 10^5


// TC = O(n^2 * log2(min(a[i],a[j])))
// n = 100
// a[i] = 10^6
// TC = O(10^4 * log2(10^6)) = O(10^4 * 6 log2(10)) = O(10^4 * 20) = O(2 * 10^5)