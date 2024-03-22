#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	vector<array<ll,2>> bucket(3);
	for(int i = 0; i < 3; ++i){
		cin >> bucket[i][0] >> bucket[i][1];
	}
	for(int i = 1; i <= 100; ++i){
		if(i%3==1){
			ll k = min(bucket[1][0] - bucket[1][1], bucket[0][1]);
			bucket[1][1] += k;
			bucket[0][1] -= k;
		}
		else if(i%3==2){
			ll k = min(bucket[2][0] - bucket[2][1], bucket[1][1]);
			bucket[2][1] += k;
			bucket[1][1] -= k;
		}
		else{
			ll k = min(bucket[0][0] - bucket[0][1], bucket[2][1]);
			bucket[0][1] += k;
			bucket[2][1] -= k;
		}
	}
	for(int i = 0; i < 3; ++i){
		cout << bucket[i][1] << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("mixmilk.in","r",stdin);
	freopen("mixmilk.out","w",stdout);
	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
