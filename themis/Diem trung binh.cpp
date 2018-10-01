#include <bits/stdc++.h>
#define ll long long
using namespace std;
string check(double tb) {
	if(tb >= 7.0) {
		return "Aluno aprovado.";
	}
	if(tb < 5.0) {
		return "Aluno reprovado.";
	}
	return "Aluno em exame.";
}
void run() {
	double n1, n2, n3, n4;
	cin>>n1>>n2>>n3>>n4;
	double tb = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
	printf("Media: %.1lf\n", tb);
	string res = check(tb);
	cout<<res<<endl;
	if(res == "Aluno em exame.") {
		double x;
		cin>>x;
		printf("Nota do exame: %.1lf\n", x);
		tb = (tb + x) / 2;
		cout<<check(tb)<<endl;
		printf("Media final: %.1lf\n", tb);
	}
}
int main() {
//	freopen("Diem trung binh.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		run();
	}
}


