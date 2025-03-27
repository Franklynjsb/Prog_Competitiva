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
		int contador=0, inicio;
		bool bandera=true;
		
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
	}
	
	
	
	return 0;
}


