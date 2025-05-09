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
	
	const ll INF = 1'000'000'010;
	
	int n,p;
	cin>>n>>p;
	
	vector<ll> v(n);
	forn(i,n) cin>>v[i];
	
	sort(v.begin(),v.end());
	
	ll l = 1, r = INF;
	
	auto puedo = [&](ll d){
		int i = 0;
		ll last = -INF;
		forn(adlsfj,p){
			while(i < n and v[i] - last < d) i++;
			if(i == n) return false;
			last = v[i++];
		}
		return true;
	};
	
	while(l < r){
		ll m = (l + r + 1) / 2 ;
		
		if(puedo(m)) l = m;
		else r = m - 1;
	}
	
	cout<<r<<'\n';
	return 0;
}
