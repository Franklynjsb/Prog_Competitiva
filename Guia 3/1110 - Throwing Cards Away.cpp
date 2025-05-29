//- ACCEPTED
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
	
	ll n;
	
	while(cin>>n,n){
		queue<ll> c;
		vector<ll> d;
		forr(i,1,n+1) c.push(i);
		
		//Descarto y guardo
		while(c.size()>1){
			d.pb(c.front());//Descarto
			c.pop();
			
			c.push(c.front());//Arreglo el arreglo
			c.pop();
		}
		cout << "Discarded cards: ";
		forn(i,d.size()){
			if(i!=d.size()-1)cout<<d[i]<<", ";
			else cout << d[i] << "\n";
		}
		cout << "Remaining card: " << c.front() << "\n";
		
	}
	
	
	return 0;
}


