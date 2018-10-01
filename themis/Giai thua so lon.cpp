#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Giai thua so lon.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int *a = new int [4001], length = 1, n, nho = 0;
	cin>>n;
//	cout<<"|"<<n<<"|";
	for(int i = 1; i <= 4000; i++) {
		a[i] = 0;
	}
	a[1] = 1;
	for(int i = 2; i <= n; i++) {
		for(int j = 1; j <= length; j++) {
			a[j] = a[j] * i + nho;
			nho = a[j] / 10;
			a[j] %= 10;
		}
		while(nho){
			a[++length] = nho % 10;
			nho /= 10;
		}
	}
	for(int i = length; i >= 1; i--) {
		cout<<a[i];
	}
}


