#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll v, ll a, ll &res){
    ll diff=(v>a)?(v-a):(a-v);

    if(res==-1 || diff<res)
        res=diff;
}

void process(){
    ll a;
    int n;
    cin>>a>>n;

    vector<int>d(n);

    for(int i=0;i<n;i++)
        cin>>d[i];

    sort(d.begin(),d.end());

    ll res=-1;

    string str=to_string(a);
    int len=str.length();

    if(len>1){
        ll val=0;

        for(int i=0;i<len-1;i++){
            int x=(i==0 && d[0]==0)?d[1]:d.back();
            val=val*10+x;
        }

        solve(val,a,res);
    }

    ll val=0;

    for(int i=0;i<len+1;i++){
        int x=(i==0 && d[0]==0)?d[1]:d[0];
        val=val*10+x;
    }

    solve(val,a,res);

    ll temp=0;
    bool check=true;
    for(int i=0;i<len;i++){
        int current=str[i]-'0';

        for(int x:d){
            if(i==0 && x==0 && len>1)
                continue;

            if(x<current){
                ll val=temp*10+x;
                for(int j=i+1;j<len;j++)
                    val=val*10+d.back();
                solve(val,a,res);
            }
            else if(x>current){
                ll val=temp*10+x;
                for(int j=i+1;j<len;j++)
                    val=val*10+d[0];
                solve(val,a,res);
            }
        }

        if(find(d.begin(),d.end(),current)!=d.end())
            temp=temp*10+current;
        else{
            check=false;
            break;
        }
    }

    if(check)
        solve(a,a,res);

    cout<<res<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        process();
    }
    return 0;
}