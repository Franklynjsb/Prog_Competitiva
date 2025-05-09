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

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	#ifdef NANO
		freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
<<<<<<< HEAD
	
	int N;
	while(cin>>N, N){
		
		vector<participante> Lista(N);
		forr(i,0,N){cin >> Lista[i].nombre >> Lista[i].num;}
		
		//inicio y su valor
		int pos = 0, valor = Lista[0].num;
		
		while (Lista.size() > 1) {
			//1->Horario
			int d = (valor%2 == 0)? 1: -1;
			int t = Lista.size();//Tamanio
			pos = (pos + d * (valor % t) + t) % t;
			//Si fue izquierdo lo retrocedo 1 para tomar esa pos
			
			//nuevo valor
			valor = Lista[pos].num-1;
			//Volar al pibe
			Lista.erase(Lista.begin() + pos);
			
			if(d == -1) pos = (pos + t - 1) % t;
		}
		
		cout << "Vencedor(a): " << Lista[0].nombre << "\n";
=======

	int n;
	while(cin>>n,n){

	vector<string> vs(n);
	vector<ll> v(n);

	forn(i,n) cin>>vs[i]>>v[i];

	int n2 = n;
	int now = 1;
	if(v[0] % 2 == 0) now = n - 1;
	int m = (v[0] % 2 == 0)? -1 : 1;
	m *= v[0] - 1 ;


	forn(adsf, n2 - 1){
		// impar sumo
		// par resto

		now = (now + m) % n;
		if(now < 0) now+=n;
		m = (v[now] % 2 == 0) ? -1 : 1;
		m *= v[now] - 1;

		bool iz = (v[now] % 2) == 0;



		v.erase(v.begin() + now);
		vs.erase(vs.begin() + now);


		//~ for(auto e: vs) cout<<e<<endl;
		//~ cout<<endl;
		n--;
		if(iz) now--;
		if(now < 0) now += n;
	}
	cout<<"Vencedor(a): "<<vs[0]<<'\n';
>>>>>>> 6f02acef3cef212e8ee04435ad7ebf16233ed065
	}
	return 0;
}
