#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

// My Code
void process(){ 
    int n; 
    cin>>n; 
    vector<int> a(n+1); 
    a[0]=-1; 
    for(int i=1; i<=n; i++) 
        cin>>a[i]; 
    
    for(int i=1; i<=n; i++){ 
        if(a[i]==i) 
            continue; 
        
        bool flag=0; 
        int j=i; 
        while(j>=1 && j<=n){ 
            if(a[j]==i){ 
                int temp=a[j]; 
                a[j]=a[i]; 
                a[i]=temp; 
                flag=1; 
                break; 
            } 
            j=j<<1; 
        } 
        if(!flag){ 
            cout<<"NO\n"; 
            return; 
        } 
    } 
    cout<<"YES\n"; 
    return; 
} 

// Chatgpt
void process2(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    a[0]=-1;
    for(int i=1; i<=n; i++)
        cin>>a[i];
 
    bool flag=0;
    for(int i=1; i<=n; i++){
        int x=a[i];
        int y=i;
 
        while(x%2==0)
            x>>=1;
        while(y%2==0)
            y>>=1;
 
        if(x!=y){
            flag=1;
            break;
        }
    }
    cout<<(flag? "NO\n" : "YES\n");
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