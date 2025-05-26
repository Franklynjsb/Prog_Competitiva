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
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll N,Q,x,c=0;
	vector<ll> p;
	
	cin>>Q>>N;
	
	while(N--){
		cin>>x;
		p.pb(x);
	}
	auto i= p.begin();
	while(Q--){
		cin>>x;
		while(x>*i && x!=0 && i!=p.end()){
			x-=*i;
			i++;
			c++;
		}
		cout << c << " " << x << "\n";
		i=p.begin();
		c=0;
	}
	
	
	
	return 0;
}


