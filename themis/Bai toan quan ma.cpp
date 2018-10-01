#include <bits/stdc++.h>
#define ll long long
using namespace std;
int run() {
	int n , m, dem = 0;
	int zz[8][2] = {
		{-1, -2},
		{-2, -1},
		{-2, 1},
		{-1, 2},
		{1, -2},
		{2, -1},
		{2, 1},
		{1, 2}
	};
	cin >> n >> m;
	int **a = new int* [n + 7];
	for(int i = 1; i <= n + 6; i++) {
		a[i] = new int [m + 7];
		for(int j = 1; j <= m + 6; j++) {
			a[i][j] = 0;
		}
	}
	for(int i = 3; i <= n + 2; i++) {
		for(int j = 3; j <= m + 2; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 3; i <= n + 2; i++) {
		for(int j = 3; j <= m + 2; j++) {
			if(a[i][j] != 2) {
				continue;
			}
			for(int k = 0; k < 8; k++) {
				int hang = zz[k][0];
				int cot  = zz[k][1];
				if(a[i + hang][j + cot] != 1) {
					continue;
				}
				a[i + hang][j + cot] = 0;
				dem++;
			}
		}
	}
	return dem;
}
int main() {
//	freopen("Bai toan quan ma.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++) {
		cout<< "#" << i << " " << run() << endl;
	}
}


