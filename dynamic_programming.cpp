#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	return 0;
}
#endif

// 1932 : 정수 삼각형
#if 0

int Max(int a, int b) {
	return a > b ? a : b;
}

int n;
int d[500+10][500+10];

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> n;
	int max = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> d[i][j];
			if (j == 1)
				d[i][j] = d[i - 1][j] + d[i][j];
			else if (j == i)
				d[i][j] = d[i - 1][j - 1] + d[i][j];
			else
				d[i][j] = Max(d[i - 1][j - 1], d[i - 1][j]) + d[i][j];
			if (max < d[i][j])
				max = d[i][j];
		}
	}
	cout << max << endl;

	return 0;
}
#endif

// 11066 : 파일 합치기
#if 1

int Min(int a, int b) {
	return a < b ? a : b;
}

int t, k;
int dp[500 + 10][500+10];
int cost[510];
int sum[510];

int dpf(int tx, int ty) {
	if (dp[tx][ty] != 0x3f3f3f3f)
		return dp[tx][ty];

	if (tx == ty)
		return dp[tx][ty] = 0;

	if (tx + 1 == ty)
		return dp[tx][ty] = cost[tx] + cost[ty];

	for (int i = tx; i < ty; i++) {
		int left = dpf(tx, i);
		int right = dpf(i + 1, ty);
		dp[tx][ty] = Min(dp[tx][ty], left + right);
	}

	return dp[tx][ty] += sum[ty] - sum[tx - 1];
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> t;

	while (t--) {
		cin >> k;
		memset(dp, 0x3f, sizeof(dp));
		for (int i = 1; i <= k; i++) {
			cin >> cost[i];
			sum[i] = sum[i - 1] + cost[i];
		}
		cout << dpf(1, k) << endl;

	}

	return 0;
}
#endif