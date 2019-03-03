#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	return 0;
}
#endif

// 1978 : 소수 찾기
#if 0

int sol(int n) {
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	for (int i = 2; i < n; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int t;
	int ans = 0;
	int num;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		if (sol(num))
			ans++;
	}

	cout << ans << endl;

	return 0;
}
#endif

// 4948 : 베르트랑 공준
#if 0

#define maxn 246912
int a[maxn + 1];
int n;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	a[1] = 1;
	for (int i = 2; i <= maxn; i++) {
		if (a[i] == 1)
			continue;
		for (int j = i + i; j <= maxn; j += i)
			a[j] = 1;
	}

	while (1) {
		cin >> n;
		if (!n)
			break;
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (!a[i])
				cnt++;
		cout << cnt << endl;
	}

	return 0;
}
#endif

// 9020 : 골드바흐의 추측
#if 0

#define MAX 10000

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int t, n;
	int not_prime[MAX + 5] = { 0,1 };

	for (int p = 2; p <= MAX; p++) {
		if (not_prime[p] == 0) {
			for (int i = 2; i*p <= MAX; i++) {
				not_prime[i*p] = 1;
			}
		}
	}

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int j = n / 2; j > 0; j--) {
			if (not_prime[j] == 0 && not_prime[n - j] == 0) {
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}
	return 0;
}
#endif

// 2581 : 소수
#if 0

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int prime[10000 + 10] = { 0,1 };
	int sum = 0;
	int min=10000;

	for (int p = 2; p <= 10000; p++) {
		if (prime[p] == 0) {
			for (int i = 2; i*p <= 10000; i++) {
				prime[i*p] = 1;
			}
		}
	}

	int m, n;
	cin >> m;
	cin >> n;

	for (int i = m; i <= n; i++) {
		if (prime[i] == 0) {
			sum += i;
			if (min > i)
				min = i;
		}
	}
	if (sum == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << min << endl;
	}

	return 0;
}
#endif

// 1929 : 소수 구하기
#if 1

int prime[1000000 + 1];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	prime[1] = { 1 };
	int m, n;

	scanf("%d %d", &m, &n);

	for (int p = 2; p <= 1000000; p++) {
		if (prime[p] == 0) {
			for (int i = 2; i*p <= 1000000; i++) {
				prime[i*p] = 1;
			}
		}
	}


	for (int i = m; i <= n; i++) {
		if (prime[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}
#endif