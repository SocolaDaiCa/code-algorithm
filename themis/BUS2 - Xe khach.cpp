#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Node {
	public:
		int i, j, time;
		Node(int i, int j, int time) {
			this->i = i;
			this->j = j;
			this->time = time;
		}
};
int main() {
	freopen("BUS2 - Xe khach.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin>>n>>m;
	int dens[n + 1][m + 1];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin>>dens[i][j];
		}
	}
	map<int, map<int, bool> > check;
	queue<Node> q;
	q.push(Node(1, 1, 0));
	while(!q.empty()) {
		Node x = q.front();
		q.pop();
		if((x.time % 2) != dens[x.i][x.j]) {
			
		} else {
			x.time++;
		}
		if(x.i == n && x.j == m) {
			cout<<x.time;
			return 0;
		}
		if(x.i + 1 <= n) {
			q.push(Node(x.i + 1, x.j, x.time + 1));
		}
		if(x.i - 1 >= 1) {
			q.push(x.i - 1, j, time + 1);
		}
		if(x.j + 1 <= n) {
			q.push(x.i, x.j + 1, time + 1);
		}
		if(x.j - 1 >= 1) {
			q.push(x.i, x.j - 1, time + 1);
		}
	}
}


