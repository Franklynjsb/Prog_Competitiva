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
	while(cin>>N, N!=0){
		
		vector<participante> Lista(N);
		
		forr(i,0,N){cin >> Lista[i].nombre >> Lista[i].num;}
		
		int pos = 0;
		int valor = Lista[0].num;
		
		
		while (Lista.size() > 1) {
			
			if (valor % 2 == 0) {
				pos = (pos + valor) % Lista.size();
			} else {
				pos = (pos - valor%Lista.size() + Lista.size()) % Lista.size();
			}
			
			valor = Lista[pos].num;
			Lista.erase(Lista.begin() + pos);
			
			if (valor % 2 != 0) {
				pos = (pos == 0) ? Lista.size() - 1 : pos - 1;
			}
		}
		
		
		cout << "Vencedor(a): " << Lista[0].nombre << "\n";
	}
	
	
	return 0;
}


