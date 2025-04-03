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
	
	int Inter, Gremio, grenal=1;
	vector<int> Partidos(4);
	while(grenal!=2){
		cin >> Inter >> Gremio;
		if(Inter>Gremio){
			Partidos[0]++;
		}else if(Gremio>Inter){
			Partidos[1]++;
		}else {
			Partidos[2]++;
		}
		Partidos[3]++;
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin>>grenal;
	}
	cout << Partidos[3] << " grenais\n";
	cout << "Inter:" << Partidos[0] << "\n";
	cout << "Gremio:" << Partidos[1] << "\n";
	cout << "Empates:" << Partidos[2] << "\n";
	if(Partidos[0]>Partidos[1]){
		cout << "Inter venceu mais\n";
	}else if(Partidos[1]>Partidos[2]){
		cout << "Gremio venceu mais\n";
	}else {
		cout << "Não houve vencedor\n";
	}
	
	
	return 0;
}


