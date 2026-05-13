#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process() {
    int r,g,b;
    cin>>r>>g>>b;
    
    vector<pair<int, char>> temp = {{r,'R'}, {g,'G'}, {b,'B'}};
    sort(temp.begin(), temp.end());
    
    int A=temp[0].first; 
    int B=temp[1].first; 
    int C=temp[2].first; 
    char charA = temp[0].second;
    char charB = temp[1].second;
    char charC = temp[2].second;

    if (C>=A+B) {
        int num_c=min(C,A+B+1);
        int len=A+B+num_c;
        string ans(len,' ');
        
        int idx=0;
        for(int i=0; i<num_c; i++){
            ans[idx]=charC;
            idx+=2;
        }

        idx=1;
        for(int i=0;i<A;i++){
            ans[idx]=charA;
            idx+=2;
        }

        for(int i=0;i<B;i++){
            ans[idx]=charB;
            idx+=2;
        }
        cout<<ans<<"\n";
    } 
    else{
        int n=A+B+C;
        string ans(n,' ');
        
        int even=(n+1)>>1;
        int a_even=even-C;
        int odd=A-a_even;

        int idx=0;
        for(int i=0;i<a_even;i++){
            ans[idx]=charA;
            idx+=2;
        }

        for(int i=0; i<C; i++){
            ans[idx]=charC;
            idx+=2;
        }
        
        idx=1;
        for(int i=0; i<B; i++){
            ans[idx]=charB;
            idx+=2;
        }
        
        for(int i=0; i<odd; i++){
            ans[idx]=charA;
            idx+=2;
        }
        cout<<ans<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}