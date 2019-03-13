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

// 1024 : 수열의 합
#if 0

int N, L;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int t, x = -1, iter = -1;

	cin >> N >> L;

	for (int i = L; i <= 100; i++) {
		t = (i - 1)*i / 2; 
		if ((N - t) % i == 0 && (N - t) / i >= 0) {
			x = (N - t) / i;
			iter = i;
			break;
		}
	}

	if (L > 100 || x == -1)
		cout << -1 << endl;
	else
		for (int i = 0; i < iter; i++) {
			cout << x + i << ' ';
		}

	return 0;
}
#endif

// 1107 : 리모컨
#if 1

#define MIN(a,b) (a<b?a:b)

int min_cnt = 0x3f3f3f3f, num_int;
int btn_set[10] = { 1,1,1,1,1,1,1,1,1,1 };

void sol(string num) {
	for (int i = 0; i < 10; i++) {
		if (btn_set[i]) {
			string tmp_num = num + to_string(i);
			min_cnt = MIN(min_cnt, abs(num_int - stoi(tmp_num)) + tmp_num.length());

			if (tmp_num.length() < 6) {
				sol(tmp_num);
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int m, k;
	cin >> num_int;
	cin >> m;
	min_cnt = MIN(min_cnt, abs(100 - num_int));

	for (int i = 0; i < m; i++) {
		cin >> k;
		btn_set[k] = 0;
	}

	if (m < 10) {
		sol("");
	}

	cout << min_cnt << endl;


	return 0;
}
#endif
