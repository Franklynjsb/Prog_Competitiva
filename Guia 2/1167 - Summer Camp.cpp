// -
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

struct participante {
	int num;
	string nombre;
};



int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	while(cin>>N, N){
		
		vector<participante> Lista(N);
		forr(i,0,N){cin >> Lista[i].nombre >> Lista[i].num;}
		
		//inicio y su valor
		int pos = 0, valor = Lista[0].num;
		
		while (Lista.size() > 1) {
			
			//1->Horario
			int d = (valor%2 == 0)? 1: -1;
			int t = Lista.size();//Tamanio
			
			pos = (pos + d * (valor % t) + t) % t;
			
			//nuevo valor
			valor = Lista[pos].num;
			//Volar al pibe
			Lista.erase(Lista.begin() + pos);
			
			//Si fue izquierdo lo retrocedo 1 para tomar esa pos
			if(d == -1) pos = (pos + t - 1) % Lista.size();
			
		}
		
		cout << "Vencedor(a): " << Lista[0].nombre << "\n";
	}
	
	
	return 0;
}


