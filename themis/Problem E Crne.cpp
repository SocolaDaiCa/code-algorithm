#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Problem E Crne.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	if(n % 2 == 0) {
		cout<< (n / 2 + 1) * (n / 2 + 1);
		return 0;
	}
	cout<<(n / 2 + 1) * (n / 2 + 2);
}


