#include <bits/stdc++.h>
#define ll long long
using namespace std;
void run() {
	int chuVi, dienTich;
	cin>>chuVi>>dienTich;
	int nuaChuVi = chuVi / 2;
	int canDienTich = sqrt(dienTich);
	if(chuVi % 2 != 0) {
		cout<<"khong ton tai hinh chu nhat" << endl;
		return;
	}
	for(int i = 1; i <= canDienTich; i++) {
		if(i * (nuaChuVi - i) != dienTich) {
			continue;
		}
		cout << i << " " << nuaChuVi - i << endl;
		return;
	}
	cout<<"khong ton tai hinh chu nhat" << endl;
}
int main() {
//	freopen("Hinh chu nhat.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		run();
	}
}


