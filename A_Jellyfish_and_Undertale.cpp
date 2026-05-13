#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll a, b, n;
    cin>>a>>b>>n;
    vector<int> v(n);
    ll res=b;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>=a)
            v[i]=a-1;
        
        res+=v[i];
    }
    
    cout<<res<<"\n";
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

// 		long long res = b;
// 		for (int i = 0; i < n; i++)
// 			res += min(x[i], a - 1);

// 		cout << res << endl;
// 	}
// 	return 0;
// }