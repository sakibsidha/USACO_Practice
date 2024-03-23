#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define sz(x) (int) x.size()

void solve(){
	string s, t, cur; cin >> s >> t;
	for(int i = 0; i < sz(s); ++i){
		cur.push_back(s[i]);
		if(cur.size() >= t.size()){
			int j = sz(t) - 1, k = sz(cur) - 1;
			for(; j >= 0; --j, --k){
				if(t[j]!=cur[k]) break;
			}
			if(j < 0){
				for(int l = 0; l < sz(t); ++l) cur.pop_back();
			}
		}
	}
	cout << cur << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("censor.in", "r",stdin);
	freopen("censor.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
