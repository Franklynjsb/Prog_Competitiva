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

long factorial(int numero){
	if (numero==0 || numero==1) return 1;
	else {
		return numero * factorial(numero-1);
	}
}

int main(int argc, char *argv[]) {
	
	int N, M;
	while (cin>>N>>M){
		cout << factorial(N) + factorial(M) << endl;
	}
	
	return 0;
}
