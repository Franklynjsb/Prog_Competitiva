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
	
	
	ll N,A,K,L;
	/////////////
	cin>>N;
	vector<int>ft(N),bk(N);
	forn(i,N)cin>>ft[i];
	forn(i,N)cin>>bk[i];
	/////////////
	
	
	/////////////
	cin>>K>>L;
	for(int l=0; l<=K; l++){
		ll r= K-l;
		if(l>N || r>N)continue;
		
		multimap<int,int> v;
		
		//Empiezo por izq
		forn(i,l)v.insert({ft[i],bk[i]});
		//Empiezo por der
		forn(i,r)v.insert({ft[N-1-i],bk[N-1-i]});
		
		//////////
		ll max=0, comp=0;
		vector<int> sum;
		for(auto &[a,b] : v){
			max+=a;
			sum.pb(b-a);
		}
		sort(sum.begin(), sum.end());
		
		ll h=0;
		while(h<L && h<sum.size()){
			if(sum[h]>0)comp+=sum[h];
		}
		//////////
		ll total = comp + max;
		max = max(max,comp);
		
	}
	
	cout << max << "\n";
	/////////////
	
	return 0;
}


