#include <bits/stdc++.h>
#define ll long long
using namespace std;
class PS {
	public:
		int tu, mau;
		PS(int tu, int mau) {
			this->tu = tu;
			this->mau = mau;
		}
		void nghichDao() {
			swap(this->tu, this->mau);
		}
		void cong(PS x) {
			this->mau *= x.mau;
			this->tu = this->tu * x.mau + x.tu * this->mau;
			this->rutGon();
		}
		void rutGon() {
			int a = this->tu, b = this->mau;
			if(a % b == 0 || b % a == 0) {
				return;
			}
			if(a < b) swap(a, b);
			while(a > b) {
				a %= b;
				if(a<b) swap(a, b);
			}
			this->tu  /= a;
			this->mau /= a;
		}
};
int main() {
	freopen("Rut gon phan so.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int *a = new int [n + 1];
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
	}
	PS res = PS(a[n], 1);
	for(int i = n - 1; i >= 1; i--) {
		res.nghichDao();
		res.cong(PS(a[i], 1));
	}
	cout<<res.tu<<"/"<<res.mau;
}


