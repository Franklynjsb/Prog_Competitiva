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
	
	vector<string> L;
	vector<string> N;
	string amigo, puntoPartida;
	
	while(cin.ignore(numeric_limits<streamsize>::max(), '\n')){
		getline(cin, amigo);
		if(amigo.empty())break;
		L.pb(amigo);
		cin.ignore();
	}
	cout << "Ingrese punto de partida" << endl;
	cin >> puntoPartida;
	if(puntoPartida=="nao"){
		forr(i,0,L.size()){
			cout << L[i] << " ";
		}
		cout <<"\n";
	}else {
		auto x = find(L.begin(), L.end(), puntoPartida);
		int pos = distance(L.begin(), x);
		
		
	}
	
	return 0;
}


