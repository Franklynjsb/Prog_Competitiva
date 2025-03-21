#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

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
		int atacante = *min_element(team1.begin(), team1.end()); //Elijo el atacante mas cercano al arco
		/*cout << atacante << " <-- atacante" << endl;*/
		
		forn(i,D){cin >> team2[i];}
		sort(team2.begin(), team2.end()); //Ordeno de menor a mayor con respecto al arco
		/*cout << team2[0] << " y " << team2[1] << " <-- defensores" << endl;*/
		
		if (atacante < team2[1]) {
			cout << "Y\n";
		}else {
			cout << "N\n";
		}
		
	}
	
	
	return 0;
}


