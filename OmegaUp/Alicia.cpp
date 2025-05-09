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

	int m,n;

	cin>>m;
	vector<int> c(m);
	forn(i,m){cin>>c[i];}

	cin>>n;
	vector<int> l(n);
	forn(i,n){cin>>l[i];}

	int r=0;
	forn(i,n){
		auto it = lower_bound(c.begin(), c.end(), l[i]);
		if (it != c.end() && *it == l[i]) {
			cout << (it - c.begin() + 1) << " "; // posición 1-indexada
		} else {
			cout << "0 ";
		}
	}






	return 0;
}
