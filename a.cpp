#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;
// void run()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("aw.txt", "w", stdout);
// #endif
// }
#define ll long long

void solve(){
	int t=1; 
	cin>>t; 
	// sieve(); 
	while(t--){ 
		int n,m; 
		cin>>n>>m; 
		string s; 
		cin>>s; 
		vector<int> arr(m,0); 
		for(int j=0;j<m;j++){
			int a;
			cin>>a;
			arr.push_back(a);
		}
		string s2; 
		cin>>s2; 
		sort(s2.begin(),s2.end()); 
		map<int,int> mp; 
		for(auto it:arr){ 
			mp[it]++; 
		} // now I have positions 
		int extra=0; 
		for(auto it:mp){ 
			extra=extra+it.second-1; 
			} // extra end se nikal dege 
			s2=s2.substr(0,m-extra); // cout<<s2<<endl; 
			int i=0; 
			for(auto it:mp){ 
				int pos=it.first; 
				s[pos-1]=s2[i]; 
				i++; 
			} 
		cout<<s<<endl;
}
}


signed main()
{
    // run();
    long long t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}









        
   