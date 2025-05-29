#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
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

#ifdef NANO
//local
#else
//judge
#endif

#include <cmath>
using namespace std;

bool Armable(int num){ //N-a² = b²
	int valor = sqrt(num);
	forr (i,0,valor){
		int aux = num - i*i;
		int aux2 = (int)sqrt(aux);
		if(aux2*aux2 == aux)return true;
	}
	return false;
}

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num;
	
	while(cin>>num){
		
		if (Armable(num)){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
		
	}
	
	
	return 0;
}


