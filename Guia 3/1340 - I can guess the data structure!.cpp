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

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, op,x;
	cin>>n;
	
	while(cin>>n){
		vector<int>l;
		
		forr(i,0,n){
			cin>>op>>x;
			if(op==1) l.pb(x);
		}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//Salidas
	cout << "stack\n";
	cout << "It's definitely a queue\n";
	cout << "queue\n";
	cout << "It's definitely a queue\n";
	cout << "priority queue\n";
	cout << "It's definitely a priority queue\n";
	cout << "impossible\n";
	cout << "It can't be a stack, a queue or a priority queue";
	cout << "not sure";
	
	return 0;
}
