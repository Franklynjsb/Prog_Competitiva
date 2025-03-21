#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	while (cin>>N, N!=0){
		
		vector<int> Vallas(N);
		int contador=0, postes, posicionInicial;
		
		forn(i,N) cin >> Vallas[i];
		
		
		// Buscar el primer poste en buen estado
		int j =0;
		while (Vallas[j] == 0) posicionInicial = (j + 1) % N;
		
		
		
		do {
			
			if (Vallas[j]==0) {
				int aux=(j+1)%N;
				
				while (Vallas[aux]==0){
					contador++;
					aux=(aux+1)%N;
					if (aux == posicionInicial) break; //Termina el ciclo
				}
				
				if (contador >= 3){
					postes += (contador-1)/2;
				}
				j=aux;
			}else {
				j = (j + 1) % N;
			}
		}while (j!=posicionInicial);
		
		cout << postes << endl;
	}
	
	
	
	return 0;
}


