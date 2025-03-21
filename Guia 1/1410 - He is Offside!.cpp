#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)


#include <algorithm>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int A, D;
	
	while (cin >> A >> D, A!=0 && D!=0){
		
		vector<int> team1(A);
		vector<int> team2(D);
		
		forn(i,A){cin >> team1[i];}
		forn(i,D){cin >> team2[i];}
		
		int mayor = 0;
		forn(i,A){
			if (team1[i]>mayor){
				mayor = team1[i];
			}
		}
		int distA = 100000-mayor;
		
		int mayorD = 0;
		forn(i,D){
			if (team2[i]>mayorD){
				mayorD = team2[i];
			}
		}
			int distD = 100000-mayorD;
		
		if ( distA > distD ){
			cout << "Y" << endl;
		}else {
			cout << "N" << endl;
		}
		
	}
	
	
	return 0;
}


