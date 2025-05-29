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
#define rv(e) reverse(e.begin(), e.end());

#ifdef NANO//Para archivos
//local
#else
//judge
#endif

using namespace std;

int n=9,m;
vector<vector<int>> g;

char ganador (vector<string> & v){
	forn(i,3){
		if(v[i][0]=='#')continue;
		if(v[i][0] == v[i][1] and v[i][0] == v[i][2]) return v[i][0];
	}
	forn(j,3){
		if(v[0][j]=='#')continue;
		if(v[0][j] == v[1][j] and v[0][j] == v[2][j]) return v[0][j];
	}
	if(v[0][0] != '#' and v[0][0] == v[1][1] and v[0][0] == v[2][2]) return v[0][0];
	if(v[2][0] != '#' and v[2][0] == v[1][1] and v[2][0] == v[0][2]) return v[2][0];
	
	return '#';
}
int id(int i, int j){
		return i*3 + j;
}
int solve(vector<string> & tablero, vector<int> & grado, char turno){
		//caso base
		char gana = ganador(tablero);
		if(gana!='#') {
				if(gana=='X')return 1;
				return -1;
		}
		int mn = 1, mx=-1;
		bool did = false;
		
		forn(i,3) forn(j,3){
			if(grado[id(i,j)] == 0) continue;
			if(tablero[i][j] == '#') continue;
			
			did = true;
			
			tablero[i][j] = turno;
			for(auto e: g[id(i,j)]) grado[e]--;
			
			int ret = solve(tablero, grado, turno ^ '#' ^ 'O'); //^ operador Xor
			mn = min(ret,mn);
			mx = max(ret,mx);
			
			tablero[i][j] = '#';
			for(auto e: g[id(i,j)]) grado[e]++;
		}
		if(not did) return 0;
		if(turno=='X') reutrn mx;
		else
		
}

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> m;
	g.resize(n);
	vector<int> grado(n,0);
	forn(i,m){
		int a,b;
		cin>>a>>b;
		a--,b--;
		g[a].push_back(b);
		grado[b]++;
	}
	vector<string> aux(3);
	forn(i,3) forn(j,3) aux[i].pb('#');
	int ret = solve (aux,grado,'X');
	
	if (ret == 1)cout << "X\n";
	else if(ret == -1) cout <<"O\n";
	else cout << "E\n";
	
	
	return 0;
}
