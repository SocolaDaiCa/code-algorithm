#include <bits/stdc++.h>
#define ll long long
using namespace std;
void run() {
	int n;
	cin>>n;
	double a[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin>>a[i][j];
		}
	}
	for(int k = 0; k < n; k++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				a[i][j] = max(a[i][j], a[i][k] * a[k][j]);
				if(a[i][i] > 1) {
					cout<<"YES"<<endl;
					return;
				}
			}
		}
	}
	cout<<"NO"<<endl;
}
int main() {
//	freopen("Olp doi tien.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		run();
	}
}


