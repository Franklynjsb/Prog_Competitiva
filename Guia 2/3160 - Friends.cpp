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

vector<string> FindNom(string& nick){
	vector<string> a;
	string nombre;
	
	for(char c : nick){
		if(c==' '){
			if(!nombre.empty()){
				a.pb(nombre);
				nombre.clear();
			}
		}else {
			nombre+=c;
		}
	}
	
	if(!nombre.empty()) a.pb(nombre);
	
	return a;
}
	
int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string nuevos, actuales, inicio;
	
	getline(cin,actuales);
	getline(cin,nuevos);
	getline(cin,inicio);
	
	vector<string> L = FindNom(actuales);
	vector<string> N = FindNom(nuevos);
	
	if(inicio != "nao"){
		
		//Buscar el nombre "inicio" dentro de la lista L
		auto i = find(L.begin(),L.end(), inicio);
		//Si cumple las condiciones Sumo toda la lista desde esa posicion
		if(i != L.end()){ L.insert(i, N.begin(), N.end()); }
		//NOTA -> Se "empuja" el resto una posicion cada que inserte
		
		
	}else {
		//Se insertaría al final
		L.insert(L.end(), N.begin(), N.end());
	}
	
	//Mostrar Lista
	for(size_t i=0; i<L.size();i++){
		cout << L[i];
		if(i< L.size()-1) cout << " ";
	}
	cout <<"\n";
	
	return 0;
}
	
	
	
