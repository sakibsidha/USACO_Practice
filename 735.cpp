#include <bits/stdc++.h>
using namespace std;
#define db(x) cerr << #x << " " << x << "\n";

void solve(){
	int x, y;
	cin >> x >> y;
	if(x < y){
		int cur = x, k = 0, f = 1, ans = 0;
		while(cur < y){
			int next;
			if(f){
				next = x + (1 << k);
				f = 0;
			} 
			else{
				next = x - (1 << k);
				f = 1;
			}
			db(next);
			ans += abs(cur - min(next, y));
			cur = next;
			k++;
		}
		cout << ans << "\n";
	}
	else{
		int cur = x, k = 0, f = 1, ans = 0;
		while(cur > y){
			int next;
			if(f){
				next = x + (1 << k);
				f = 0;
			} 
			else{
				next = x - (1 << k);
				f = 1;
			}
			db(next);
			ans += abs(cur - max(next, y));
			cur = next;
			k++;
		}
		cout << ans << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("lostcow.in","r",stdin);
	freopen("lostcow.out","w",stdout);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
