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
	#ifdef NANO
		//freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<ll> s;
	ll n,x;
	string p;
	
	cin>>n;
	while(n--){
		cin>>p;
		
		if(p == "PUSH"){
			cin>>x;
			if(!s.empty()){
				ll min = s.top();
				if(x>min) x=min;
			}
			s.push(x);
		}else if(p == "POP"){
			if(!s.empty())s.pop();
			else cout << "EMPTY\n";
		}else if(p == "MIN"){
			if(!s.empty())cout << s.top() << "\n";
			else cout << "EMPTY\n";
		}
		
	}
	
	return 0;
}


