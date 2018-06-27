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
ll test(){
	ll n, k;
	cin>>n>>k;
	ll *a = new ll[n + 1];
	for(ll i = 1; i<=n; i++){
		cin>>a[i];
	}
	sort(a + 1, a + 1 + n);
	ll l = 1;
	for(ll i = 2; i<=n; i++){
		if(abs(a[i] - a[l]) > k) l++;
	}
	return n - l + 1;
}
int main() {
//	freopen("bai 1.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, t, k, x, xBefore, bus;
	cin>>t;
	for(ll i = 1; i <= t; i++){
		cout<<"Case #"<<i<<endl<<test()<<endl;
	}
}


