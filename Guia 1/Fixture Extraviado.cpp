#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	#ifdef NANO
		freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	while(cin>>n, n != -1){
		vector<string> v(n + 1);
		for(int i = 2; i <= n; i++) cin>>v[i];
		for(auto & e: v) reverse(e.begin(),e.end());
		
		string ans;
		bool did = true;
		while(did){
			did = false;
			for(int a = 2; a<=n; a++){
				if(v[a].empty()) continue;
				int b = v[a].back() - '0';
				if(b == 1){
					ans.pb(char(a + '0'));
					v[a].pop_back();
					did = true;
				}
				else if( v[b].back() == (a + '0') ){
					v[a].pop_back();
					v[b].pop_back();
					did = true;
				}
			}
			
		}
		cout<<ans<<'\n';
	}  
	
	
	
	return 0;
}
