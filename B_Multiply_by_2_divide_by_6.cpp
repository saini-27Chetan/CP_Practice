#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin>>n;

    int operations=0;
    while(n>1){
        if(n%3!=0){
            cout<<"-1\n";
            return;
        }

        while(n%6==0){
            operations++;
            n/=6;
        }

        if(n>1){
            operations++;
            n<<=1;
        }
    }
    cout<<operations<<"\n";
    return;
}

// Second Approach
void process2(){
    int n;
    cin>>n;

    int count2=0, count3=0;
    while(n%2==0){
        n>>=1;
        count2++;
    }
    while(n%3==0){
        n/=3;
        count3++;
    }

    if(n>1){
        cout<<"-1\n";
        return;
    }

    if(count2<=count3)
        cout<<(count3-count2)+count3<<"\n";
    else
        cout<<"-1\n";
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