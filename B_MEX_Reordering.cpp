// #include <bits/stdc++.h>
// using namespace std;

// int MEX(int a, int b, vector<int>& v){
//     unordered_set<int> s;
//     for(int i=a; i<=b; i++)
//         s.insert(v[i]);

//     int x = 0;
//     while (s.count(x)) x++;
//     return x;
// }

// bool findSmall(int idx, vector<int>& v){
//     int ele = v[idx-1];

//     int minEle = INT_MAX;
//     int smallIdx = -1;
//     for(int i=idx; i<v.size(); i++){
//         if(v[i]==ele)
//             continue;

//         if(minEle>v[i]){
//             minEle = v[i];
//             smallIdx=i;
//         }
//     }

//     if(smallIdx!=-1){
//         v[idx-1] = v[smallIdx];
//         v[smallIdx] = ele;
//         return 1;
//     }

//     return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;

//         vector<int> v(n);
//         for(int i=0; i<n; i++)
//             cin>>v[i];

//         bool flag=0;
//         for(int i=0; i<n-1; i++){
//             if(MEX(0,i,v) == MEX(i+1,n-1,v)){
//                 if(findSmall(i+1, v) && i>0)
//                     i--;
//                 else{
//                     flag=1;
//                     break;
//                 }
//             }
//         }

//         if(flag)
//             cout<<"NO\n";
//         else
//             cout<<"YES\n";
//     }
//     return(0);
// }


#include<bits/stdc++.h>
using namespace std;

bool helper(int n, vector<int>& a){
    vector<int> prefixMex(n), suffixMex(n);
    set<int> s;
    int current_mex = 0;
    for(int i = 0; i < n; i++){
        s.insert(a[i]);
        while(s.count(current_mex)) 
            current_mex++;
        
        prefixMex[i] = current_mex;
    }
    
    s.clear();

    current_mex = 0;
    for(int i = n - 1; i >= 0; i--){
        s.insert(a[i]);
        while(s.count(current_mex)) 
            current_mex++;
        
        suffixMex[i] = current_mex;
    }
    
    for(int i = 0; i < n - 1; i++){
        if (prefixMex[i] == suffixMex[i + 1])
            return false;
    }
    
    return true;
}

void mystery(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());

    if(helper(n, a)){
        cout<<"YES\n";
        return;
    }

    sort(a.rbegin(), a.rend());

    if(helper(n, a)){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        mystery();

    return 0;
}