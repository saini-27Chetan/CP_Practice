#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    int a,b,king_x,king_y,queen_x,queen_y;
    cin>>a>>b>>king_x>>king_y>>queen_x>>queen_y;

    int x[8] = {a,a,-a,-a,b,b,-b,-b};
    int y[8] = {b,-b,b,-b,a,-a,a,-a};

    set<pair<int,int>> st;
    for(int i=0; i<8; i++)
        st.insert({king_x+x[i], king_y+y[i]});

    int ans=0;
    for(int i=0; i<8; i++){
        if(a==b && i==4)
            break;
        if(st.find({queen_x+x[i], queen_y+y[i]})!=st.end())
            ans++;
    }
    cout<<ans<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        // process();
        // process2();
        performTask();
    }
    return(0);
}

// int intersection(vector<pair<int,int>> v1, vector<pair<int,int>> v2) {
//     sort(v1.begin(), v1.end());
//     sort(v2.begin(), v2.end());
//     v1.erase(unique(v1.begin(), v1.end()), v1.end());
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());
//     int i = 0, j = 0, count=0;

//     while (i < v1.size() && j < v2.size()) {
//         if (v1[i] == v2[j]) {
//             count++;
//             i++; j++;
//         } else if (v1[i] < v2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }
//     return count;
// }

// void process(){
//     int a,b,king_x, king_y, queen_x, queen_y;
//     cin>>a>>b>>king_x>>king_y>>queen_x>>queen_y;

//     vector<pair<int, int>> k;
//     vector<pair<int, int>> q;

//     int x, y;
//     // FOR KING
//     // UP
//     y = king_y + a;
//     x = king_x + b;
//     k.push_back({x,y});
//     x = king_x - b;
//     k.push_back({x,y});
    
//     // DOWN
//     y = king_y - a;
//     x = king_x + b;
//     k.push_back({x,y});
//     x = king_x - b;
//     k.push_back({x,y});

//     // LEFT
//     x = king_x - a;
//     y = king_y + b;
//     k.push_back({x,y});
//     y = king_y - b;
//     k.push_back({x,y});

//     // RIGHT
//     x = king_x + a;
//     y = king_y + b;
//     k.push_back({x,y});
//     y = king_y - b;
//     k.push_back({x,y});

//     // FOR QUEEN
//     // UP
//     y = queen_y + a;
//     x = queen_x + b;
//     q.push_back({x,y});
//     x = queen_x - b;
//     q.push_back({x,y});
    
//     // DOWN
//     y = queen_y - a;
//     x = queen_x + b;
//     q.push_back({x,y});
//     x = queen_x - b;
//     q.push_back({x,y});

//     // LEFT
//     x = queen_x - a;
//     y = queen_y + b;
//     q.push_back({x,y});
//     y = queen_y - b;
//     q.push_back({x,y});

//     // RIGHT
//     x = queen_x + a;
//     y = queen_y + b;
//     q.push_back({x,y});
//     y = queen_y - b;
//     q.push_back({x,y});

//     cout<<intersection(k,q)<<endl;
// }

// ------------------------------------------------------------------------------------------------------

// void process2(){
//     int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
//     int a,b,king_x, king_y, queen_x, queen_y;
//     cin>>a>>b>>king_x>>king_y>>queen_x>>queen_y;

//     set<pair<int, int>> k, q;

//     for(int i=0; i<4; i++){
//         k.insert({king_x+dx[i]*a, king_y+dy[i]*b});
//         k.insert({king_x+dx[i]*b, king_y+dy[i]*a});
        
//         q.insert({queen_x+dx[i]*a, queen_y+dy[i]*b});
//         q.insert({queen_x+dx[i]*b, queen_y+dy[i]*a});
//     }

//     int ans=0;
//     for (auto position : k)
// 		if (q.find(position) != q.end())
// 			ans++;

// 	cout << ans << endl;
// }

// ------------------------------------------------------------------------------------------------------