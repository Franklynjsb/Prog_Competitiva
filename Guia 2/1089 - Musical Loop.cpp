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

//ACCEPTED
int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	
	while(cin>>N, N!=0){
		vector<int> Loop(N);
		int cont=0;
		
		forr(i,0,N){cin>>Loop[i];}
		forr(i,0,N){
			int ant = Loop[(i-1+N)%N];
			int sig = Loop[(i+1)%N];
			if ((Loop[i]>ant && Loop[i]>sig) || (Loop[i]<ant && Loop[i]<sig))cont++;
		}
			cout << cont << "\n";
	}
	
	return 0;
}


