#include <bits/stdc++.h>
#define ll long long
using namespace std;
int maxWidth, n, *a;
int nextF(int currentIndex, int nextIndex, int currentF) {
	if(nextIndex < 1 || nextIndex > n) {
		return -1;
	}
	if(a[currentIndex] > a[nextIndex]) {
		return currentF + a[currentIndex] - a[nextIndex];
	}
	return currentF - 3 * (a[nextIndex] - a[currentIndex]);
}
void go(int currentIndex, int f, int beginIndex, int deep) {
//	if(deep > 2 * n) return;
	bool canGo = false;
	if(nextF(currentIndex, currentIndex + 1, f) >= 0) {
		go(currentIndex + 1, nextF(currentIndex, currentIndex + 1, f), beginIndex, deep + 1);
		canGo = true;
	}
	if(nextF(currentIndex, currentIndex - 1, f) >= 0) {
		go(currentIndex - 1, nextF(currentIndex, currentIndex - 1, f), beginIndex, deep + 1);
		canGo = true;
	}
	if(canGo) {
		return;
	}
	maxWidth = max(abs(beginIndex - currentIndex), maxWidth);
}
int run() {
	cin>>n;
	a = new int [n + 2];
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
	}
	maxWidth = 0;
	for(int i = 1; i <= n; i++) {
		go(i, 0, i, 0);
	}
	return maxWidth;
}
int main() {
	freopen("Bai toan truot tuyet.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++) {
		cout << "#" << i << " " << run() <<endl;
	}
}

