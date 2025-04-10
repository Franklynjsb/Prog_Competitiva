//ACCEPTED
#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define pop pop_back
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

using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, D;
	while(cin>>N>>D, N && D){
		string x;
		cin>>x;
		
		vector<char> num;
		int aux=D;
		
		//For hecho para recorrer char de un string usando como variable a
		for(char a : x) {
			while(!num.empty() && aux>0 && num.back()<a){
				num.pop();
				aux--;
			}
			num.pb(a);
		}
		
		//Por si requiere más de una iteración
		while(aux--){
			num.pop();
		}
		forr(i,0,N-D){cout << num[i];}cout << "\n";
	}
	
	
	return 0;
}


