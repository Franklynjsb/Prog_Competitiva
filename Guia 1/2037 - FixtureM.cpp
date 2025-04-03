#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define forrIg(i,a,b) for(int i=a;i<=b;i++)
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
	
	int casos;
	while (cin>>casos, casos!=-1){
		//casos+1 para contar a Florencia y tomar i como Nro de jugadores
		vector<string> Listado(casos+1);
		string Florencia;
		/*cout<<"puto el que lee"<<endl;*/
		//Ingresa datos
		for(int i=2;i<=2;i++){cin>>Listado[i];}
		for(auto & e:Listado) reverse(e.begin(), e.end());
		
		bool bandera=true;
		while(bandera){
			bandera=false;
			for(int i=2; i<=casos;i++){
				
				if(Listado[i].empty()) continue;
				
				int b = Listado[i].back()-'0';
				
				if(b==1){
					Florencia.push_back(i+'0');
					Listado[i].pop_back();
					bandera=true;
				}else if (Listado[b].back()==(i+'0')){
					Listado[i].pop_back();
					Listado[b].pop_back();
					bandera=false;
				}
			}
		}
		cout << Florencia << endl;
	}
	
	
	return 0;
}


