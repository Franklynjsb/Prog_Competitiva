#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
<<<<<<< HEAD
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second
=======
>>>>>>> ce47b40bb8320118bb5a3147b29fcb73e31e4c4a

using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
<<<<<<< HEAD
	vector<vector<char>> PrimerLienzo, SegundoLienzo;
	int filas, columnas;
	
	while (cin >> filas >> columnas, filas!=0 && columnas!=0){
		forn(i,filas){forn(j,columnas){cin >> PrimerLienzo[i][j];}}
		
		cin >> filas >> columnas;
		
		
	}
	
=======
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
	
	
	
	
	
>>>>>>> ce47b40bb8320118bb5a3147b29fcb73e31e4c4a
	return 0;
}


