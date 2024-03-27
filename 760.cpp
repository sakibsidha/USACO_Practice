#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	ll k[n], a[n], temp[n];
	for(int i = 0; i < n; ++i){
		cin >> k[i];
		a[i] = i+1;
	}
	for(int j = 1; j <= 3; ++j){
		for(int i = 0; i < n; ++i){
			temp[k[i]-1] = a[i];
		}
		for(int i = 0; i < n; ++i){
			a[i] = temp[i];
		}
	}
	string s[n];
	for(int i = 0; i < n; ++i){
		cin >> s[i];
	}
	string ans[n];
	for(int i = 0; i < n; ++i){
		ans[a[i]-1] = s[i];
	}
	for(int i = 0; i < n; ++i){
		cout << ans[i] << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("shuffle.in", "r",stdin);
	freopen("shuffle.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
