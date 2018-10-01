#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Point {
	public:
		double x, y;
};
double dienTich(Point a, Point b, Point c) {
	return abs( (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y)) / 2;
}
double kc2(Point a, Point b) {
	return pow(a.x - b.x, 2) * pow(a.y - b.y, 2); 
}
Point leoDoi(Point a, Point b, Point m) {
	Point mid;
	double aMid, bMid, mMid;
	while(abs(a.x - b.x) > 0.0001 || abs(a.y - b.y) > 0.0001) {
		mid.x = (a.x + b.x) / 2;
		mid.y = (a.y + b.y) / 2;
		aMid = kc2(a, mid);
		bMid = kc2(b, mid);
		mMid = kc2(m, mid);
		if(aMid > mMid && aMid > bMid) {
			a = mid;
		} else {
			b = mid;
		}
	}
	mid.x = (a.x + b.x) / 2;
	mid.y = (a.y + b.y) / 2;
	return mid;
}
void run() {
	Point a, b, c, m;
	cin >> a.x >> a.y
		>> b.x >> b.y
		>> c.x >> c.y
		>> m.x >> m.y;
	double abc = dienTich(a, b, c);
	double mab = dienTich(m, a, b);
	double mbc = dienTich(m, b, c);
	double mca = dienTich(m, c, a);
	if(mab + mbc + mca == abc) {
		cout << m.x << " " << m.y << endl;
		return;
	}
	Point p1 = leoDoi(a, b, m);
	Point p2 = leoDoi(b, c, m);
	Point p3 = leoDoi(c, a, m);
	double k1 = kc2(p1, m);
	double k2 = kc2(p2, m);
	double k3 = kc2(p3, m);
	Point p;
	if(k1 <= k2 && k1 <= k3) {
		p = p1;
	}else if(k2 <= k1 && k2 <= k3) {
		p = p2;
	} else {
		p = p3;
	}
	printf("%.3lf %.3lf\n", p.x, p.y);
//	cout << p.x << " " << p.y << endl;
}

int main() {
//	freopen("Tam giac.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		run();
	}
}


