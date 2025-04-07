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
	}
	
	
	return 0;
}


