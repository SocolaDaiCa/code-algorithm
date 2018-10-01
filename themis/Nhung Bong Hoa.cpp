#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Flower {
	public: 
		int height, index;
};
bool ss(Flower a, Flower b) {
	if(a.height != b.height) {
		return a.height < b.height;
	}
	return a.index < b.index;
}
int main() {
//	freopen("Nhung Bong Hoa.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Flower *flowers = new Flower [n + 1];
	bool *isCuteds = new bool [n + 2];
	for(int i = 1; i <= n; i++) {
		cin >> flowers[i].height;
		flowers[i].index = i;
		isCuteds[i] = false;
	}
	sort(flowers + 1, flowers + n, ss);
	int totalDays = 0, remainFlowers = n, i = 0, index;
	while(remainFlowers) {
		do {
			i++;
			index = flowers[i].index;
		}
		while(i <= n && isCuteds[index]);
		if(i > n) break;
		totalDays++;
		isCuteds[index] = true;
		remainFlowers--;
		if(index + 1 <= n && isCuteds[index + 1] == false) {
			isCuteds[index + 1] = true;
			remainFlowers--;
		}
		if(index - 1 >= 1 && isCuteds[index - 1] == false) {
			isCuteds[index - 1] = true;
			remainFlowers--;
		}
	}
	cout<<totalDays;
}


