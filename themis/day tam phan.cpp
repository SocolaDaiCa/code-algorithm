#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, dem = 0, buoc = 0;
string zz[] = {"0", "1", "2"};
void run(int deep, string s, int before) {
	if(!deep) {
		cout<<s<<endl;
		dem++;
		return;
	}
	for(int i = 0; i <= 2; i++) {
		if(before != -1 && (i == before || (before + i) % 3 == 0 )) {
			continue;
		}
		run(deep - 1, s + zz[i], i);
	}
}
int main() {
//	freopen("day tam phan.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	run(n, "", -1);
	cout<<dem;
}


