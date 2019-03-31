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

// 2512 : 예산
#if 1

int n, money;
int city[10010];

bool valid(int mid) {
	int ret = 0;
	for (int i = 0; i < n; i++) {
		ret += min(mid, city[i]);
	}
	return (ret <= money);
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int left = 0, right = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> city[i];
		right = max(right, city[i]);
	}
	cin >> money;

	while (left != right) {
		int mid = (left + right + 1) / 2;
		if (valid(mid)) {
			left = mid;

		}
		else {
			right = mid - 1;
		}
	}

	cout << left << endl;

	return 0;
}
#endif