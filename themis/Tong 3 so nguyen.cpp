#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Tong 3 so nguyen.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, s, dem = 0;
	cin>>n>>s;
	for(int i = 0; i <= n; i++) {
		if(i + 2 * n < s || i > s) {
			continue;
		}
		for(int j = 0; j <= n; j++) {
			if(i + j <= s && i + j + n >= s){
				dem++;
			}
		}
	}
	cout<<dem;
}


