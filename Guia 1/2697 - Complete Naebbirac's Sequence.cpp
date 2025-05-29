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
	
	int k,n, num;
	
	cin>>k>>n;
	
	vector<int> Cont(k+1);//Contadores de cantidades
	forr(i,0,n){ //Carga de datos
		cin >> num;
		Cont[num]++;
	}//////////////////////
	
	int frecMin=n, frecMax=0, posMin=0, posMax=0;
	forr(i,1,k+1){
		if (Cont[i] < frecMin){
			frecMin = Cont[i];
			posMin=i;
		}
		if (Cont[i] > frecMax){
			frecMax = Cont[i];
			posMax = i;
		}
	}
	
	if (!(n%k)){
		if (frecMax - frecMin > 2){
			cout << "*\n";
		}
		else{
			cout << "-" << posMax << " +" << posMin << "\n";
		}
	}else {
		if (frecMax - frecMin >=2){
			cout << "*\n";
		}
		else {
			if(!((n+1)%k)){
				cout << "+" << posMin << "\n";
			}
			else{
				cout << "-" << posMax << "\n";
			}
		}
	}
	
	
	return 0;
}


