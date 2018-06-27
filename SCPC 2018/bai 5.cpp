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
ll nLamp, nLine, n, nPoint = 1, yMin = 0;
using namespace std;
class Point{
	public: 
		ll x, y;
};
void run(ll l, ll index, ll &yMin, ll yMax, ll n, ll k, ll xL, ll yL){
	if(index == nLamp){
		if(points[l].x + points[l].y >= n){
			yMin = min(yMin, yMax);
		}
		return;
	}
	if(yMax >= yMin || l == nPoint) return;
	for(ll i = l + 1; i <= nLine; i++){
		// tim giao diem
		// vuong goc
		if()
	}
//	for(ll i = l + points[l].y + 1; i <= nPoint; i++){
//		if(
//			(points[i].y - points[i - 1].y) * k < 0 &&
//			(points[i].x - points[l].x) % 2 == 0 &&
//			(points[l].x + points[l].x) == (points[i].x - points[l].x) / 2
//		){
//			run(i, index + 1, nPoint, nLamp, yMin, max(yMax, points[i].y), points, n, k * (-1));
//		}
//	}
}
void test(){
	cin>>n>>nLine>>nLamp;
	n *= 2;
	Point *points = new Point[n + 2], point;
	cin>>points[1].x>>points[1].y;
	points[1].x *= 2;
	points[1].y *= 2;
	
	yMin = max(yMin, points[1].y);
	for(ll i = 2; i <= nLine + 1; i++){
		cin>>point.x>>point.y;
		
		point.x *= 2;
		point.y *= 2;
		
		yMin = max(yMin, point.y);
		
		int k = (point.y > points[nPoint].y) ? 1 : -1;
		int start = points[nPoint].x + 1;
		for(ll j = start; j <= point.x; j++){
			nPoint++;
			points[nPoint].x = j;
			points[nPoint].y = points[nPoint - 1].y + k;
		}
	}
	ll *dois = new ll[nPoint + 2];
	dois[1] = 1;
	for(ll i = 2; i<= nPoint - 1; i++){
		if(points[i-1].y == points[i+1].y){
			dois[i] = dois[i - 1] + 1;
		}
	}
	dois[nPoint] = dois[nPoint - 1] + 1;
//	for(ll i = 1; i <= nPoint; i++){
//		cout<<"point "<<i<<": "<<points[i].x<<" "<<points[i].y<<endl;
//	}
	yMin++;
	ll notFound = yMin;
	for(ll i = 1; i <= nPoint - nLamp + 1; i++){
		if(points[i].x - points[i].y <= 0){
//			cout<<"kk "<<points[i].x<<endl;
			run(i, 1, yMin, points[i].y, n, points[2].y - points[1].y, ll xL, ll yL);
		} else {
			break;
		}
	}
	if(yMin == notFound){
		cout<<"-1";
	} else if(yMin % 2 == 0){
		cout<<(yMin / 2)<<" "<<1;
	} else {
		cout<<yMin<<" "<<2;
	}
}
int main() {
	freopen("bai 5.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
		cout<<"Case #"<<i<<endl;
		test();
		cout<<endl;
	}
}


