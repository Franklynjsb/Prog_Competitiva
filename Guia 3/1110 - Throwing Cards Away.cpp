//-
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
	
	int n;
	while(cin>>n,n!=0){
		deque<ll> c;
		vector<ll> d;
		
		///
		forn(i,n+1)c.push_back(i+1);
		///
		
		while(c.size()>1){
			d.push_back(c.front());
			c.pop_front();
			c.pb(c.front());
			c.pop_front();
		}
		
		cout << "Discarded cards: ";
		forall(it,d){
			if(it!=d.end())cout<< *it << ", ";
			else cout << *it << "\n";
		}
		cout << "Remaining cards: "<<d.front() << "\n";	
	}
	
	
	return 0;
}


