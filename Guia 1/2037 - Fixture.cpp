#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)

struct Jugador {
	int num;
	int lista;
};

using namespace std;
//1+2+3+4+5+6+7+8+9
//casos=4;
//4+3+2+1 = 10
//312 = 6

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int casos;
	while (cin>>casos, casos!=-1){
		vector<Jugador> Listado(casos);
		string Florencia;
		
		forr(i,1,casos){
			cin >> Listado[i].lista;
			Listado[i].num=i+1;
		}
		
		
		cout << Florencia << endl;
	}
	
	
	return 0;
}


