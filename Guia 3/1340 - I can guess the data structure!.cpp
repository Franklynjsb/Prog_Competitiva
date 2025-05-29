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
		
		stack<int>s;
		queue<int>q;
		priority_queue<int>pq;
		bool Ys=true, Yq=true, Ypq=true;
		
		forn(i,n){
			cin>>op>>x;
			if(op == 1){
				s.push(x);
				q.push(x);
				pq.push(x);
			}else {
				if(s.empty() || q.empty() || pq.empty()){
					Ys=Yq=Ypq=false;
					continue;
				}
				if(Ys){
					if(s.top()!=x) Ys=false;
					else s.pop();
				}
				if(Yq){
					if(q.front()!=x) Yq=false;
					else q.pop();
				}
				if(Ypq){
					if(pq.top()!=x) Ypq=false;
					else pq.pop();
				}
			}
		}
		
		
		if (Ys + Yq + Ypq > 1) cout << "not sure\n";
		else if (Ys) cout << "stack\n";
		else if(Yq) cout << "queue\n";
		else if (Ypq) cout << "priority queue\n";
		else cout << "impossible\n";
		
	}
	
	return 0;
}
