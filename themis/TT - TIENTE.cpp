#include <bits/stdc++.h>
#define ll long long
using namespace std;
int *coins, nCoints, caseNumber = 0, halfOfTheMoney = 0;
string zzz = "";
void devide(int nCoinsHadDivide, string res, int con1, int con2) {
	if(nCoinsHadDivide == nCoints && con1 == con2) {
		caseNumber++;
		zzz = zzz + "\n" + res;
	}
	if(nCoinsHadDivide == nCoints || con1 > halfOfTheMoney || con2 > halfOfTheMoney) {
		return;
	}
	devide(nCoinsHadDivide + 1, res + "A ", con1 + coins[nCoinsHadDivide + 1], con2);
	devide(nCoinsHadDivide + 1, res + "B ", con1, con2 + coins[nCoinsHadDivide + 1]);
}
int main() {
	freopen("TT - TIENTE.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>nCoints;
	coins = new int [nCoints + 1];
	for(int i = 1; i <= nCoints; i++) {
		cin>>coins[i];
		halfOfTheMoney += coins[i];
	}
	halfOfTheMoney /= 2;
	devide(0, "", 0, 0);
	if(caseNumber) {
		cout<<caseNumber<<zzz;
		return 0;
	}
	cout<<"khong chia duoc";
}


