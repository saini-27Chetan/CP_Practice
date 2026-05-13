#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        vector<int> v(n);
        long long ans=b;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>=a)
                v[i]=a-1;
            
            ans+=v[i];
        }
        
        cout<<ans<<endl;
    }
    return(0);
}


// TLE CODE
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		long long a, b, n;
// 		cin >> a >> b >> n;
// 		long long x[n];
// 		for (int i = 0; i < n; i++)
// 			cin >> x[i];

// 		long long ans = b;
// 		for (int i = 0; i < n; i++)
// 			ans += min(x[i], a - 1);

// 		cout << ans << endl;
// 	}
// 	return 0;
// }