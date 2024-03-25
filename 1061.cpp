#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define sz(x) (int) x.size()

vector<array<ll,3>> E, N;
vector<ll> dp;

ll f(int idx, vector<array<ll,3>> a[]){
	if(dp[idx]!=-1) return dp[idx]; 
	ll ans = 1e9;
	for(int i = 0; i < sz(a[idx]); ++i){
		if(f(a[idx][i][2], a) > a[idx][i][0]){
			ans = min(ans, a[idx][i][1]);
		}
	}
	return ans;
}

void solve(){
	ll n; cin >> n;
	for(int i = 1; i <= n; ++i){
		char ch; cin >> ch;
		ll x, y; cin >> x >> y;
		if(ch=='E') E.push_back({x,y,i});
		else N.push_back({x,y,i});
	}
	vector<array<ll,3>> a[n+1];
	for(int i = 0; i < sz(E); ++i){
		for(int j = 0; j < sz(N); ++j){
			if(N[j][0] > E[i][0] && N[j][1] < E[i][1]){
				if(N[j][0]-E[i][0] > E[i][1]-N[j][1]){
					a[E[i][2]].push_back({E[i][1]-N[j][1],N[j][0]-E[i][0],N[j][2]});
				}
			}
		}
	}
	for(int i = 0; i < sz(N); ++i){
		for(int j = 0; j < sz(E); ++j){
			if(N[i][0] > E[j][0] && N[i][1] < E[j][1]){
				if(N[i][0]-E[j][0] < E[j][1]-N[i][1]){
					a[N[i][2]].push_back({N[i][0]-E[j][0],E[j][1]-N[i][1],E[j][2]});
				}
			}
		}
	}
	dp.resize(n+1, -1);
	for(int i = 1; i <= n; ++i){
		if(sz(a[i])==0){
			dp[i] = 1e9;
		}
	}
	for(int i = 1; i <= n; ++i){
		if(dp[i]==-1){
			dp[i] = f(i, a);
		}
	}
	for(int i = 1; i <= n; ++i){
		if(dp[i]==1e9) cout << "Infinity" << "\n";
		else cout << dp[i] << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	// int tc; cin >> tc;
	// while(tc--)
		solve();

	return 0;
}
