#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("DS - ebola.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, x, t;
	bool coNguoiNhiem;
	cin>>t;
	cin>>x;
	int *a = new int [t + 1];
	bool *check = new bool [t + 1];
	check[x] = 1;
	for(int i = 1; i < t; i++) {
		check[t] = false;
	}
	for(int i = 1; i <= t; i++) {
		cin>>n;
		coNguoiNhiem = false;
		a[n + 1] = i;
		for(int j = 1; j <= n; j++) {
			cin>>a[j];
		}
		n++;
		for(int j = 1; j <= n; j++) {
			if(check[a[j]]) {
				coNguoiNhiem = true;
				break;
			}
		}
		if(!coNguoiNhiem) {
			continue;
		}
		for(int j = 1; j <= n; j++) {
			check[a[j]] = true;
		}
	}
	int dem = 0;
	for(int i = 1; i <= t; i++) {
		dem += check[i];
	}
	cout<<dem<<endl;
	for(int i = 1; i <= t; i++) {
		if(check[i]) {
			cout<<i<<" ";
		}
	}
}


