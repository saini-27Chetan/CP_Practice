#include <bits/stdc++.h>
using namespace std;

void performTask(){
    int n;
    cin>>n;

    int ops=0;
    while(n>1){
        if(n%3!=0){
            cout<<"-1\n";
            return;
        }

        while(n%6==0){
            ops++;
            n/=6;
        }

        if(n>1){
            ops++;
            n<<=1;
        }
    }
    cout<<ops<<"\n";
    return;
}

// Second Approach
void performTask2(){
    int n;
    cin>>n;

    int cnt2=0, cnt3=0;
    while(n%2==0){
        n>>=1;
        cnt2++;
    }
    while(n%3==0){
        n/=3;
        cnt3++;
    }

    if(n>1){
        cout<<"-1\n";
        return;
    }

    if(cnt2<=cnt3)
        cout<<(cnt3-cnt2)+cnt3<<"\n";
    else
        cout<<"-1\n";
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
