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
	while(cin>>n, n){
		vector<int> v(n);
		forn(i,n) cin>>v[i];
		
		int l = -1, r = -1;
		
		forn(i,n) if(v[i] == 1){
			l = i;
			break;
		}
		
		forn(i,n) if(v[i] == 1){
			r = i;
			//~ break;
		}
		
		if(l == -1){
			cout<<(n + 1) / 2 << '\n';
			continue;
		}
		
		int c = 0, ans = 0;
		
		for(int i  = l; i <= r; i++){
			if(v[i] == 1){
				ans += c / 2;
				c = 0;
			}
			else{
				c++;
			}
		}
		
		int cerosIz = l;
		int cerosDer = n - r - 1;
		int bordes = (cerosIz + cerosDer) / 2;
		cout<<ans + bordes<<'\n';
	}  
	
	
	
	return 0;
}
