#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Oc sen.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b, h;
	cin>>a>>b>>h;
	cout<<(h-b)/(a-b) + ((h-b)%(a-b) != 0);
}


