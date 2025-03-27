#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
//Tiene aceptado
using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int filas, columnas;
	int filasFinal, columnasFinal;
	
	while(cin>>filas>>columnas, filas!=0 && columnas!=0){
		vector<vector<char>> Matriz;
		Matriz.resize(filas, vector<char>(columnas));
		
		forr(i,0,filas){
			forr(j,0,columnas){
				cin>>Matriz[i][j];
			}
		}
		
		cin >> filasFinal >> columnasFinal;
		vector<vector<char>> MatrizFinal;
		MatrizFinal.resize(filasFinal, vector<char>(columnasFinal));
		
		forr(k,0,filasFinal){
			forr(h,0,columnasFinal){
				int i = (k * filas) / filasFinal;
				int j = (h * columnas) / columnasFinal;
				MatrizFinal[k][h] = Matriz[i][j];
				cout << MatrizFinal[k][h];
			}
			cout << endl;
		}
	}
	
	return 0;
}


