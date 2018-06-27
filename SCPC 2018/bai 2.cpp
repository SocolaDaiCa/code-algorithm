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
int palindromes[200], nPalindrome = 0;
void genPalindromes(){
	for(int i = 1; i <= 9; i++){
		palindromes[++nPalindrome] = i;
	}
	
	for(int i = 1; i <= 9; i++){
		palindromes[++nPalindrome] = i * 11;
	}
	
	for(int i = 1; i<= 9; i++){
		for(int j = 0; j <= 9; j++){
			palindromes[++nPalindrome] = i * 101 + j * 10;
		}
	}
	
	for(int i = 1; i<= 9; i++){
		for(int j = 0; j <= 9; j++){
			palindromes[++nPalindrome] = i * 1001 + j * 110;
		}
	}
}
void run(int x){
	for(int i = 1; i <= nPalindrome; i++){
		if(x == palindromes[i]){
			cout<<"1 "<<palindromes[i]<<endl;
			return;
		}
	}
	for(int i = 1; i <= nPalindrome; i++){
		for(int j = 1; j <= nPalindrome; j++){
			if(palindromes[i] + palindromes[j] == x){
				cout<<"2 "<<palindromes[i]<<" "<<palindromes[j]<<endl;
				return;
			}
		}
	}
	for(int i = 1; i <= nPalindrome; i++){
		for(int j = 1; j <= nPalindrome; j++){
			for(int k = 1; k <= nPalindrome; k++){
				if(palindromes[i] + palindromes[j] + palindromes[k] == x){
					cout<<"3 "<<palindromes[i]<<" "<<palindromes[j]<<" "<<palindromes[k]<<endl;
					return;
				}
			}
		}
	}
}
int main() {
//	freopen("bai 2.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, x;
	genPalindromes();
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>x;
		cout<<"Case #"<<i<<" "<<endl;
		run(x);
	}
	return 0;
}

