#include <iostream>
#include <cstring>
using namespace std;

int tc;
int d[31][31];

int func(int n, int m) {
	if (n == m || m == 0) return 1;
	if (d[n][m]) return d[n][m];#if exist then return
	return d[n][m] = func(n - 1, m - 1) + func(n - 1, m);#combination
}

int main() {
	cin >> tc;
	int n, m;
	
	for(int i=0;i<tc;i++){
		memset(d, 0, sizeof(d));

		cin >> n >> m;
		cout << func(m, n) << '\n';
	}
	
	return 0;
}
