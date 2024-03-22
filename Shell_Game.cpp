#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	ll v[3] = {1,2,3};
	map<ll,ll> cnt;
	for(int i = 0; i < n; ++i){
		ll a, b, g; cin >> a >> b >> g;
		a--, b--, g--;
		swap(v[a], v[b]);
		cnt[v[g]]++;
	}
	ll ans = 0;
	for(auto it: cnt) ans = max(ans, it.second);
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("shell.in","r",stdin);
	freopen("shell.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
