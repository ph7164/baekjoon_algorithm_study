#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin ����ӵ� ���

	return 0;
}
#endif

// 2490 : ������
#if 0

int a, b, c, d;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin ����ӵ� ���

	for (int i = 0; i < 3; i++) {
		cin >> a >> b >> c >> d;

		int sum = a + b + c + d;
		if (sum == 0) {
			cout << "D" << endl;
		}
		else if (sum == 1) {
			cout << "C" << endl;
		}
		else if (sum == 2) {
			cout << "B" << endl;
		}
		else if (sum == 3) {
			cout << "A" << endl;
		}
		else if (sum == 4) {
			cout << "E" << endl;

		}
	}

	return 0;
}
#endif

// 1022 : �ҿ뵹�� ���ڰ� ����ϱ�  ��������� ����?
#if 1

int r1, r2, c1, c2;
int d[50][5];
int maxx = -1;

int go(int x, int y) {
	if (x >= 0 && -1 * x <= y && y <= x)
		return (x * 2 + 1)*(x * 2 + 1) - (x - y);
	else if (x < 0 && x <= y && y <= abs(x))
		return (abs(x) * 2)*(abs(x) * 2) - (abs(x) - 1) - y;
	else if (y > x&&y > -1 * x)
		return ((y - 1) * 2 + 1)*((y - 1) * 2 + 1) + (y - x);
	else
		return (abs(y) * 2)*(abs(y) * 2) + (x - y + 1);

	return -1;
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin ����ӵ� ���

	cin >> r1 >> c1 >> r2 >> c2;

	maxx = max(max(go(r1, c1), go(r2, c2)), max(go(r1, c2), go(r2, c1)));
	int size = to_string(maxx).size();

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			printf("%*d ", size, go(i, j));
			
		}
		cout << endl;
	}

	return 0;
}
#endif