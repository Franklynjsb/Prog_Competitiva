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
#define ll long long

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
	
	
	int n;
	vector<int> v(n);
	forr(i,0,n){cin>>v[i];}
	
	int q;
	cin>>q;
	
	while(q--){
		ll x;
		cin>>x;
		
		auto it = lb(v.begin(), v.end(),x);
		
		if((it == v.end()) or (*it !=x ) )cout << '0 ';
		else cout << int (it - v.begin() +1) << ' ';
	}
	
	return 0;
}


