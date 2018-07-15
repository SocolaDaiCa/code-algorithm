#include <iostream>
#include <algorithm>
#include <stack>
#include <iomanip>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;
long long trans(long long x, long long coSo){
	long long heCoso = 0;
	while(x != 0){
		heCoso = heCoso * 10 + x / coSo;
//		if(x % coSo == 0){
//			heCoso *= 10;		
//		}
		x /= coSo;
	}
	return heCoso;
}
string run(){
	long long x, y, coSo, du = 0;
	cin>>x>>y>>coSo;
	map<long long, bool> check;
	while(true){
		x %= y;
		if(x == 0){
			return "Finite";
		}
		if(check[x % coSo]){
			return "Infinite";
		}
		check[x % coSo] = true;
		while(x < y){
			x = trans(x, coSo);
		}
	}
}
int main() {
//	freopen("P182SUMA.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
//	cin>>t;
//	while(t--){
//		cout<<run()<<endl;
//	}
	for(int i = 1; i <= 10; i++){
		cout<<trans(i, 2)<<endl;
	}
}


