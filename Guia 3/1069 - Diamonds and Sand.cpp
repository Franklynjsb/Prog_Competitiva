// ACCEPTED
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


int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	while(n--){
		string f;
		cin>>f;
		
		stack<char> d;
		int r=0;
		for (char x : f) {
			if(x=='<'){
				d.push(x);
			}else if ( x=='>'){
				if(!d.empty()){
					d.pop();
					r++;
				}
			}
		}
		
		cout << r << "\n";
	}
	
	return 0;
}


