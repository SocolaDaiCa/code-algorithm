#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Point {
	public:
		double x, y;
};
double dienTich(Point a, Point b, Point c) {
	return abs( (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y) ) / 2;
}
int main() {
//	freopen("Dien tich tu giac.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	Point points[5];
	for(int i = 1; i <= 4; i++) {
		cin>>points[i].x>>points[i].y;
	}
	double s1 = dienTich(points[1], points[2], points[3]) + dienTich(points[3], points[4], points[1]);
	double s2 = dienTich(points[2], points[3], points[4]) + dienTich(points[4], points[1], points[2]);
	cout<<min(s1, s2);
}


