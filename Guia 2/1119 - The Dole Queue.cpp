//ACCEPTED
#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define pop pop_back
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
	
	int N, K, M;
	
	while(cin>>N>>K>>M,  N && K && M){
		//Inicializo el vector desde 1 a N y lo dejo en falso
		vector<bool> eliminados(N+1, false);
		//Contadores
		int izq = 0, der = N+1, aux = N;
		
		while(aux){
			//Contador a la izquierda
			int izqCont=0;
			while (izqCont < K) {
				izq++;
				if (izq > N) izq=1;
				if(!eliminados[izq]) izqCont++;
			}
			
			//Contador a la derecha
			int derCont=0;
			while(derCont < M) {
				der--;
				if(der < 1) der=N;
				if(!eliminados[der]) derCont++;
			}
			
			if(der == izq){
				cout << setw(3) << izq;
				eliminados[der]=true;
				aux--;
			}else {
				cout << setw(3) << izq << setw(3) << der;
				eliminados[izq] = true;
				eliminados[der] = true;
				aux-=2;
			}
			
			if(aux) cout << ",";
			
		}
		
		cout << "\n";
		
	}
	
	return 0;
}


