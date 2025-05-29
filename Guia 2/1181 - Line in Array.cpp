//ACCEPTED
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

	vector<vector<double>>  Matriz(12, vector<double>(12));;
	
	char t;
	int l;
	
	cin >> l >> t;
	
	forr(i,0,12){
		forr(j,0,12){
			cin>>Matriz[i][j];
		}
	}
	
	double valor=0;
	forr(i,0,12){
		valor+=Matriz[l][i];
	}
	cout << fixed << setprecision(1);
	(t=='S')? cout<<valor<<"\n" : cout<<valor/12 << "\n";
	
	return 0;
}


