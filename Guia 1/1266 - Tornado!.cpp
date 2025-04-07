#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second

using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	
	while (cin>>N, N!=0){
		int UnoIzq = -1, UnoDer=-1;
		vector<int> Vallas(N);
		bool primero=true;
		forn(i,N){
			cin >> Vallas[i];
			if (Vallas[i]==1 and primero){
				UnoIzq=i;
				primero=false;
			}
			if(Vallas[i]==1){
				UnoDer=i;
			}
		}
		
		if (UnoIzq == -1){
			cout << (N+1)/2 << "\n"; continue;
		}
		
		int ceros=0, total= 0;
		
		for(int i = UnoIzq; i <= UnoDer; i++){
			if (Vallas[i] == 1){
				total+=ceros/2;
				ceros=0;
			}else {
				ceros++;
			}
		}
		int cerosDer = N - UnoDer - 1;
		int bordes = (UnoIzq + cerosDer)/2;
		cout << total + bordes << "\n";
	}
	
	
	
	return 0;
}


