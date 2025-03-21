#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	while (cin>>N, N!=0){
		
		vector<int> Vallas(N);
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
	}
	
	
	
	return 0;
}


