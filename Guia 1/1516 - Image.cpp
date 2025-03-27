#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)

using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int filas, columnas;
	int filasFinal, columnasFinal;
	
	while(cin>>filas>>columnas, filas!=0 && columnas!=0){
		vector<vector<char>> Matriz;
		vector<vector<char>> MatrizFinal;
		
		forr(i,0,filas){forr(j,0,columnas){cin>>Matriz[i][j];}}
		
		cin >> filasFinal >> columnasFinal;
		
		forr(i,0,filas){
			forr(j,0,columnas){
				forr(k,0,filasFinal){
					forr(h,0,columnasFinal){
						MatrizFinal[k][h]=Matriz[i][j];
					}
				}
			}
		}
		
		forr(i,0,filas){
			forr(j,0,columnas){
				cout << Matriz[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	
	
	
	
	return 0;
}


