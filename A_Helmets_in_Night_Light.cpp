#include <bits/stdc++.h>
using namespace std;

void process(){
    long long n, p;
    cin>>n>>p;
    vector<long long> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cin>>b[i];

    vector<pair<long long, long long>> v(n);
    long long ans=p;
    long long peopleInformed=1;

    for(int i=0; i<n; i++)
        v[i]={b[i], a[i]};

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        int cost = v[i].first;
        int people = v[i].second;

        if(cost>=p) // Do direct sharing
            break;

        if((peopleInformed+people)>n){
            ans+=(n-peopleInformed)*cost;
            peopleInformed=n;
            break;
        }    
        
        ans+=people*cost;
        peopleInformed+=people;
    }

    if(peopleInformed!=n)
        ans+=(n-peopleInformed)*p;
    
    cout<<ans<<"\n";
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