#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

<<<<<<< HEAD
=======

#include <algorithm>
#include <cstdlib>
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
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
<<<<<<< HEAD
		int atacante = *min_element(team1.begin(), team1.end()); //Elijo el atacante mas cercano al arco
		/*cout << atacante << " <-- atacante" << endl;*/
		
		forn(i,D){cin >> team2[i];}
		sort(team2.begin(), team2.end()); //Ordeno de menor a mayor con respecto al arco
		/*cout << team2[0] << " y " << team2[1] << " <-- defensores" << endl;*/
		
		if (atacante < team2[1]) {
			cout << "Y\n";
		}else {
			cout << "N\n";
=======
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
>>>>>>> d1b029fc396c7d1afedabb27f42f5b63885df834
		}
		
	}
	
	
	return 0;
}


