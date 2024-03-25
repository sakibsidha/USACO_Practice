#include <bits/stdc++.h>
using namespace std;

void solve(){
	int r, c, k; cin >> r >> c >> k;
	char a[r][c];
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < r; ++i){
		string s;
		for(int j = 0; j < c; ++j){
			for(int l = 0; l < k; ++l){
				s.push_back(a[i][j]);
			}
		}
		for(int l = 0; l < k; ++l){
			cout << s << "\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("cowsignal.in","r",stdin);
	freopen("cowsignal.out","w",stdout);
	
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
