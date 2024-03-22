#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n, m; cin >> n >> m;
	vector<ll> limits(101, 0), speeds(101, 0);
	ll last = 1;
	while(n--){
		ll to, limit;
		cin >> to >> limit;
		for(int i = last; i < last + to; ++i){
			limits[i] = limit;
		}
		last += to;
	}
	last = 1;
	while(m--){
		ll to, speed;
		cin >> to >> speed;
		for(int i = last; i < last + to; ++i){
			speeds[i] = speed;
		}
		last += to;
	}
	ll ans = 0;
	for(int i = 1; i <= 100; ++i){
		ans = max(ans, speeds[i]-limits[i]);
	}
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("speeding.in", "r",stdin);
	freopen("speeding.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
