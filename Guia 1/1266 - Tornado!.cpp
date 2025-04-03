#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	bool bandera=true;
	
	while (cin>>N, N!=0){
		
		vector<int> Vallas(N);
		int contador=0, posicionInicial=-1, ultimoUno=-1;
		
		forn(i,N) {
			cin >> Vallas[i];
			if (Vallas[i]!=0 && bandera){
				posicionInicial=i;
				bandera=false;
			}
			if(Vallas[i]==1){
				ultimoUno=i;
			}
		}
		
		if(posicionInicial==-1){//Todos Ceros
			cout << (N+1)/2 << "\n";
		}
		int ans=0;
		
		forr(i,posicionInicial, N){
			if(Vallas[i]==1){
				ans+=contador/2;
				contador=0;
			}else {
				contador++;
			}
		}
		
		if (posicionInicial!=-1){
			int cerosIz=posicionInicial;
			int cerosDer=(N-ultimoUno-1);
			ans+=(cerosDer+cerosIz)/2;
			cout << ans << "\n";
		}
		
	}
	
	
	
	return 0;
}


