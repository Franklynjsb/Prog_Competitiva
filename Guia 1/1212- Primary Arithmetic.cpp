#include <bits/stdc++.h>

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

void Carry(int numero, int numero2, int &resultado) {
	while (numero!=0 && numero2!=0){
		if((numero%10 + numero2%10)>=10) {
			resultado++;
			numero/=10;
			numero2/=10;
			if(numero!=0) numero++;
			if (numero2!=0) numero2++;
		}else {
			numero/=10;
			numero2/=10;
		}
		
	}
}

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M, resultado=0;
	while (cin>>N>>M, N!=0 && M!=0){
		Carry(N,M,resultado);
		if (resultado==0){
			cout << "No carry operation." << endl;
		}else {
			cout << resultado << " carry operations." << endl;
		}
		resultado=0;
	}
	
	return 0;
}

