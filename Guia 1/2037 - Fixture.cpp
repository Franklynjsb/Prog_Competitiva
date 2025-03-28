#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forrIg(i,a,b) for(int i=(a);i<=(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n;i>=2;i--)//Cambiado para el caso >=2


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
		
		//Ingresa datos
		forrIg(i,2,casos){cin>>Listado[i];}
		
		//Me muevo en la prob de 100 chars
		forr(i,0,100){//The second line contains N-1 non-empty strings Li of at most100 characters each
			//Me muevo en la lista que me dan
			dforn(j,casos){
				//Comparo caracteres
				if (i<Listado[j].size() && Listado[j][i]=='1'){
					//Asigno el jugador en Florencia
					Florencia+= to_string(j);
				}
			}
		}
		
		
		cout << Florencia << endl;
	}
	
	
	return 0;
}


