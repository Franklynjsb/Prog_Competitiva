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


int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	set<int> stack;
	int N, V;
	string S;
	
	cin >> N;
	while (N--) {
		cin >> S;
		
		if (S == "PUSH") {
			cin >> V;
			
			if (!stack.empty()) {
				int currentMin = *stack.begin();
				if (V > currentMin) V = currentMin;
			}
			
			stack.insert(V);
		}
		
		else if (S == "POP") {
			if (!stack.empty()) {
				stack.erase(*stack.begin());
			} else {
				cout << "EMPTY" << endl;
			}
		}
		
		else if (S == "MIN") {
			if (!stack.empty()) {
				cout << *stack.begin() << "\n";  // el menor está al comienzo
			} else {
				cout << "EMPTY" << endl;
			}
		}
	}
	
	return 0;
}



