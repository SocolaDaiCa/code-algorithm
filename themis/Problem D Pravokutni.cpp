#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Point {
	public:
		ll x, y;
};
ll tvh(Point a, Point b, Point c) {
	a.x -= b.x;
	a.y -= b.y;
	c.x -= b.x;
	c.y -= b.y;
	return a.x * c.x + a.y * c.y;
}
int main() {
//	freopen("Problem D Pravokutni.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	Point *points = new Point[n];
	for(int i = 0; i < n; i++) {
		cin>>points[i].x>>points[i].y;
	}
	int dem = 0;
	for(int i = 0; i < n - 2; i++) {
		for(int j = i + 1; j < n - 1; j++) {
			for(int k = j + 1; k < n; k++) {
				if(
					tvh(points[j], points[i], points[k]) == 0 ||
					tvh(points[i], points[j], points[k]) == 0 ||
					tvh(points[j], points[k], points[i]) == 0
				)
				dem++;
			}
		}
	}
	cout<<dem;
}


