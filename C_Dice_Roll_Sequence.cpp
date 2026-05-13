#include <bits/stdc++.h>
using namespace std;
#define ll long long

int process(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    const int infinite=1e9;
    vector<vector<int>> dp(n, vector<int>(7, infinite));

    for(int i=1; i<=6; i++)
        dp[0][i]=(arr[0]!=i);

    for(int i=1; i<n; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                if(j!=k && j+k!=7)
                    dp[i][j]=min(dp[i][j], dp[i-1][k]+(arr[i]!=j));
            }
        }
    }

    return *min_element(dp[n-1].begin()+1, dp[n-1].end());
}

// Akshat code
void process2(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    long long count = 0;
	for(long long i = 1 ; i < n;i++){
		if(arr[i] == arr[i-1] || 7-arr[i] == arr[i-1]){
			count++;
		    i++;
		}
	}
	cout << count << endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        // cout<<process()<<"\n";
        process2();
    }
    return(0);
}