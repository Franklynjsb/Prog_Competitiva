// -
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
	
	int n;
	long long s2,r2,s3,r3,s4,r4;
	long long aux;
	
	forr(i,0,101){
		
		cin >> n;
		
		aux = (n*(n+1))/2;
		
		//FIGURAS EN 2D
		s2 = (n*(n+1)*(2*n+1))/6;
		r2 = (aux*aux) - s2;
		
		//FIGURAS EN 3D
		s3 = (aux*aux);
		r3 = (aux*aux*aux) - s3;
		
		//FGURAS EN 4D
		s4 = (n*(n+1)*(2*n+1)*(3*(n*n)+3*n-1))/30;
		r4 = (aux*aux*aux*aux) - s4;
		
		cout <<s2<<" "<<r2<<" "<<s3<<" "<<r3<<" "<<s4<<" "<<r4<<"\n";
		
	}
		
		return 0;
}


