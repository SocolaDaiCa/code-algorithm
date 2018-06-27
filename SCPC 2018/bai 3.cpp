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
class Line {
	public:
		int ball1, ball2;
};
bool customSort(Line x, Line y){
	return x.ball1 < y.ball1 || x.ball2 < y.ball2;
}
void cut(map<int, map<int, bool> > &lines, int i){
	if(lines.find(i) == lines.end()) return;
//	cout<<"line: "<<i<<" size "<<lines[i].size()<<endl;
	if(lines[i].size() == 2) {
		map<int, bool> zz = lines[i];
		std::map<int, bool>::iterator it = zz.begin();
		int x = it->first;
		int y = (++it)->first;
//		cout<<"zz: "<<x<<" "<<y<<endl;
		if(lines[x].find(y) != lines[x].end()){
			lines.erase(i);
			lines[x].erase(i);
			lines[y].erase(i);
			cut(lines, x);
			cut(lines, y);
		}
	}
}
int test(){
	int nBall, nLine;
	Line x, xBefore;
	map<int, map<int, bool> > lines;
	cin>>nBall>>nLine;
	for(int i = 1; i <= nLine; i++){
		cin>>x.ball1>>x.ball2;
		lines[x.ball1][x.ball2] = true;
		lines[x.ball2][x.ball1] = true;
	}
	for(int i = 1; i <= nBall; i++){
		cut(lines, i);
	}
	return lines.size();
//		
//		if(i == 1){
//			xBefore = x;
//			continue;
//		}
//		
//		if(
//			(x.ball1 == xBefore.ball1 && lines[x.ball2][xBefore.ball2]) ||
//			(x.ball2 == xBefore.ball2 && lines[x.ball1][xBefore.ball1]) ||
//			(x.ball1 == xBefore.ball2 && lines[x.ball2][xBefore.ball1]) ||
//			(x.ball2 == xBefore.ball1 && lines[x.ball1][xBefore.ball2])
//		) {
//			nBall--;
//		}
//		xBefore = x;
//	}
	
}
int main() {
//	freopen("bai 3.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
		cout<<"Case #"<<i<<endl<<test()<<endl;
	}
	return 0;
}
