#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("dem doan.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, x, y, r, dem = 0, xA, yA;
	cin>>n>>r;
	ll r2 = r * r;
	cin>>xA>>yA;
	while(n--) {
		cin>>x>>y;
		if(pow(xA - x, 2) + pow(yA - y, 2) <= r2) {
			dem++;
		}
	}
	cout<<dem * (dem - 1) / 2;
}
