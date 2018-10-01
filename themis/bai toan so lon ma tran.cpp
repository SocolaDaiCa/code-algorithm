#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Node {
	public:
		int i, j, value;
	Node(int a, int b, int c) {
		this->i = a;
		this->j = b;
		this->value = c;
	}
	Node() {
	}
};
bool ss(Node a, Node b) {
	if(a.value != b.value) {
		return a.value > b.value;
	}
	if(a.i != b.i) {
		return a.i > b.i;
	}
	return a.j > b.j;
}
int run() {
	int m, n, dem = 0, x, hang, cot, value, nNode = 0;
	cin>>n>>m;
	Node *nodes = new Node[n * m + 100];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin>>x;
			nodes[++nNode] = Node(i, j, x);
		}
	}
	sort(nodes + 1, nodes + nNode + 1, ss);
	int maxHangs[n + 1], maxCots[m + 1];
	for(int i = 1; i <= n; i++) {
		maxHangs[i] = nodes[n * m].value - 1;
	}
	for(int i = 1; i <= m; i++) {
		maxCots[i] = nodes[n * m].value - 1;
	}
	for(int i = 1; i <= n * m; i++) {
		hang = nodes[i].i;
		cot  = nodes[i].j;
		value = nodes[i].value;
		maxHangs[hang] = max(maxHangs[hang], value);
		maxCots[cot] = max(maxCots[cot], value);
		if(maxHangs[hang] > value || maxCots[cot] > value) {
			continue;
		}
		dem++;
	}
	return dem;
}
int main() {
//	freopen("bai toan so lon ma tran.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++) {
		cout<<"#"<<i<<" "<<run() << endl;
	}
}


