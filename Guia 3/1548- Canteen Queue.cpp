// ACCEPTED
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
	
	int N,M,p;
	
	cin>>N;
	while(N--){
		cin>>M;
		vector<int>s;
		
		forn(i,M){
			cin>>p;
			s.pb(p);
		}
		
		vector<int>o=s;
		sort(o.begin(),o.end(), greater<int>());
		
		int c=0;
		forn(i,M)if(s[i]==o[i])c++;
		cout << c << "\n";
		
	}
	
	return 0;
}


