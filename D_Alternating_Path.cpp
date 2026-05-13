#include <bits/stdc++.h>
using namespace std;
#define ll long long

void process(){
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>> mat(n + 1);
    for(int i = 0; i < m; i++){
        int x,y;
        cin>>x>>y;
        mat[x].push_back(y);
        mat[y].push_back(x);
    }

    int ans = 0;
    vector<int> arr(n+1, -1);

    for(int i = 1; i <= n; i++){
        if(arr[i] == -1) {
            queue<int> q;
            q.push(i);
            arr[i] = 0;
            
            bool flag = true;

            int count[2] = {0, 0};

            while(!q.empty()){
                int front = q.front();
                q.pop();
                count[arr[front]]++;

                for(auto x : mat[front]){
                    if(arr[x] == -1) {
                        arr[x] = 1-arr[front]; 
                        q.push(x);
                    } 
                    else if(arr[x] == arr[front])
                        flag = false; 
                }
            }

            if(flag)
                ans += max(count[0], count[1]);
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        process();
    }
    return(0);
}