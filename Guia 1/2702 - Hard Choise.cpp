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


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int resultado=0;
	int C, B, P;
	cin >> C >> B >> P;
	int n1=0, n2=0, n3=0;
	cin >> n1 >> n2 >> n3;
	
	C -= n1;
	B -= n2;
	P -= n3;
	
	if (C<0){
		resultado+=C;
	}
	if (B<0){
		resultado+=B;
	}
	if (P<0){
		resultado+=P;
	}
	cout << resultado*-1 << endl;
	
	return 0;
}


