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

// 1057 : 토너먼트
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int total, kim, lim;
	int cnt = 0;

	cin >> total >> kim >> lim;

	if (total < kim || total < lim) {
		cout << -1 << endl;
	}
	else {
		while (kim != lim) {
			kim = (kim + 1) / 2;
			lim = (lim + 1) / 2;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
#endif

// 3163 : 떨어지는 개미
#if 0

#define MAX 100000
int t, n, l, k;
pair<int, int> p[MAX];

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> t;
	while (t--) {
		int cnt = 0;
		vector<int> v;
		cin >> n >> l >> k;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x >> p[i].second;
			if (p[i].second < 0)
				p[cnt++].first = x;
			else
				v.push_back(l - x);
		}
		for (int it : v)
			p[cnt++].first = it;
		sort(p, p + n);
		cout << p[k - 1].second << endl;
	}

	return 0;
}
#endif

