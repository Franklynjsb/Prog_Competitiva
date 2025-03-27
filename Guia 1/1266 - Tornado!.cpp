#include <bits/stdc++.h>
<<<<<<< HEAD
#define forr(i,a,b) for(int i=(a);i<(b);i++)
=======
<<<<<<< HEAD
#define forr(i,a,b) for(int i=(a);i<(b);i++)
=======
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
>>>>>>> 5b5348ec8cb2f888a9ccec2f99bbaf507689cada
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
		int contador=0, inicio;
		bool bandera=true;
=======
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
>>>>>>> 5b5348ec8cb2f888a9ccec2f99bbaf507689cada
		
		forn(i,N) {
			cin >> Vallas[i];
			if (Vallas[i]==1 && bandera){
				inicio=i;
				bandera=false;
			}
		}
		bool cero=false;
		
		forr(i,inicio,N-1) {
			if (Vallas[i]==0) cero=true;
			
			if (cero && Vallas[i]==0) {
				Vallas[i]=1;
				contador++;
			}else if (Vallas[i]==1) cero = false;
		}
		
		contador+=(inicio/2);
		
		cout << contador << endl;
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
	}
	
	
	
	return 0;
}


