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

// 2455 : 지능형 기차
#if 0

int out, in;
int sum;
int m;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	for (int i = 0; i < 4; i++) {
		cin >> out >> in;

		sum += -out + in;

		m = m > sum ? m : sum;
	}

	cout << m << endl;

	return 0;
}
#endif

// 1094 : 막대기
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int x;

	cin >> x;

	int r = 0;

	while (x != 0) {
		if (x % 2 == 1)
			r++;
		x /= 2;
	}

	cout << r << endl;

	return 0;
}
#endif

// 1547 : 공
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int m, x, y;
	int arr[4] = { 0,1 };
	int temp;

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;

		temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	for (int i = 1; i <= 3; i++) {
		if (arr[i])
			cout << i << endl;
	}

	return 0;
}
#endif

// 10219 : Meats On The Grill
#if 1

int t;
int h, w;
char pan[12][12];

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w;
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				cin >> pan[j][k];
			}
		}
		for (int j = 0; j < h ; j++) {
			for (int k = w - 1; k >= 0; k--) {
				cout << pan[j][k];
			}
			cout << endl;
		}
	}

	return 0;
}
#endif