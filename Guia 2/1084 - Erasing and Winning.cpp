#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
<<<<<<< HEAD
#define pop pop_back
=======
>>>>>>> d306de8beaab43719b9525cd36d4f247d5b133e4
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
<<<<<<< HEAD
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
=======
	while (cin >> N >> D, N!=0 && D!=0){
		
		int num;
		cin >> num;
		
		vector<int> digitos(N);
		int aux=N-1;
		
		while(num){
			digitos[aux] = num%10;
			aux--;
			num/=10;
		}
		
		int j=0;
		while(D){
			forr(i,0,digitos.size()){
				if(digitos[i]==j){
					digitos.erase(digitos.begin()+i);
					D--;
					i--;
				}
				if(D==0)break;
			}
			j++;
		}
		forr(i,0,digitos.size()){cout << digitos[i];}
		cout << "\n";
>>>>>>> d306de8beaab43719b9525cd36d4f247d5b133e4
	}
	
	
	return 0;
}


