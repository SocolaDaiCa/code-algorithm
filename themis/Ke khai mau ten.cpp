#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Ke khai mau ten.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string name;
	getline(cin, name);
	cout<<(name.length() > 30 ? "KHONG" : "CO");
}


