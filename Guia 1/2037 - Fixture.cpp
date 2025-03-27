#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)

struct Jugador {
	int num;
	int lista;
};

using namespace std;

void OrdenarLista(vector<Jugador> Lista){
	int largo = Lista.size();
	forr(i,0,largo){
		forr(j,1,largo){
			if (Lista[j-1].lista < Lista[j].lista){
				Jugador aux = Lista[j-1];
				Lista[j-1]=Lista[j];
				Lista[j] = aux;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int casos;
	while (cin>>casos, casos!=-1){
		vector<Jugador> Listado(casos);
		string Florencia{};
		
		forr(i,1,casos){
			cin >> Listado[i-1].lista;
			Listado[i-1].num=i+1;
		}
		
		OrdenarLista(Listado);
		
		forr(i,0,casos){Florencia+=to_string(Listado[i].num);}
		
		cout << Florencia << endl;
	}
	
	
	return 0;
}


