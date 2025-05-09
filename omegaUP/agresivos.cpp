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


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	const long long INF = 1'000'100'000;
	long long n,p;
	cin>>n>>p;
	
	vector<long long>v(n);
	forr(i,0,n){cin>>v[i];}
	sort(v.begin(), v.end());
	
	
	auto s = [&](long long d){
		int i = 0;
		long long last = -INF;
		forn(_,p){
			while(i<n && v[i]-last<d)i++;
			if(i==n)return false;
			last=v[i++];
		}
		return true;
	};
	
	long long l=1, r =INF, m;
	while(l<r){
		m = (l+r+1)/2;
		if(s(m)) l = m;
		else r=m-1;
	}
	
	cout << r <<"\n";
	
	
	return 0;
}


