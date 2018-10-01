#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("ZEROPATH - Phan tich so.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, dem = 1, x;
	map<int, bool> check;
	queue<int> q;
	cin>>n;
	q.push(n);
	while(!q.empty()) {
		x = q.front();
		q.pop();
		for(int i = 1; i * i <= x; i++) {
			if(x % i == 0) {
				int zz = (i - 1) * (x / i + 1);
				if(!check[zz])
				q.push(zz);
				check[zz] = true;
			}
		}
	}
	cout<<check.size()<<endl;
	for (map<int , bool>::iterator it = check.begin(); it != check.end(); ++it)
    std::cout << it->first << " ";
}


