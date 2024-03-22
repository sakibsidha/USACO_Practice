#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	string s, t;
	int fq[26] = {0};
	for(int i = 0; i < n; ++i){
		cin >> s >> t;
		int s_fq[26] = {0}, t_fq[26] = {0};
		for(int j = 0; j < s.size(); ++j) s_fq[s[j]-'a']++;
		for(int j = 0; j < t.size(); ++j) t_fq[t[j]-'a']++;
		for(int j = 0; j < 26; ++j){
			fq[j] += max(s_fq[j],t_fq[j]);
		}
	}
	for(int i = 0; i < 26; ++i) cout << fq[i] << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("blocks.in", "r",stdin);
	freopen("blocks.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
