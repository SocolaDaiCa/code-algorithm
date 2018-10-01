#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
//	freopen("Problem H Zebras and Ocelots.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, dem = 0;
	string s;
	cin>>n;
	for(ll i = n - 1; i >=0; i--){
		cin>>s;
		if(s == "O") {
			dem += (ll)pow(2, i);
		}
	}
	cout<<dem;
}


