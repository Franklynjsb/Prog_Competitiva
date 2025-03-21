#include <bits/stdc++.h>
<<<<<<< HEAD
#define forr(i,a,b) for(int i=(a);i<(b);i++)
=======
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
#define forn(i,n) forr(i,0,n)

using namespace std;


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	while (cin>>N, N!=0){
		
		vector<int> Vallas(N);
<<<<<<< HEAD
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
=======
		int contador=0;
		
		forn(i,N-1) cin >> Vallas[i];
		
		forr(i, 1, N-1) {
			
			if (Vallas[i-1] == 0 && Vallas[i] == 0) {
				contador++;
				Vallas[i] = 1;
			}
		}
		
		if (Vallas[0]==0 && Vallas[N-1] == 0){
			contador++;
		}
		
		cout << contador << endl;
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
	}
	
	
	
	return 0;
}


