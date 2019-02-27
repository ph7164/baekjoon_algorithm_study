#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#if 0
int main() {

	return 0;
}
#endif

// 2292 : 벌집
#if 0
int main() {

	int n;
	int cnt = 0;

	scanf("%d", &n);
	n--;

	while (1) {
		n -= cnt * 6;
		cnt++;
		if (n <= 0)
			break;
	}
	printf("%d", cnt);

	return 0;
}
#endif

// 1193 : 분수찾기
#if 0
int main() {

	int x;
	int cnt = 0;

	scanf("%d", &x);

	while (x > 0) {
		cnt++;
		x -= cnt;
	} 

	if (cnt % 2 == 0)
		printf("%d/%d", cnt + x, 1 + (-x));
	else
		printf("%d/%d", 1 + (-x), cnt + x);

	return 0;
}
#endif

// 2775 : 부녀회장이 될테야
#if 0

int room[15][15];

int main() {

	int tc;

	scanf("%d", &tc);

	for (int i = 1; i < 15; i++) {
		room[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			room[i][j] = room[i - 1][j] + room[i][j - 1];
		}
	}

	for (int i = 0; i < tc; i++) {
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", room[k][n]);
	}

	return 0;
}
#endif

// 1475 : 방 번호
#if 0

int num[10];

int main() {

	int n;
	int cnt = 1;

	scanf("%d", &n);

	for (int i = 1; n / i > 0; i *= 10) {
		num[n % (i * 10) / i]++;
		n -= n % i;
	}

	for (int i = 0; i < 10; i++) {
		if (cnt < num[i]) {
			if (i == 9 || i == 6)
				cnt = (num[9] + num[6] + 1) / 2;
			else
				cnt = num[i];
		}
	}

	printf("%d", cnt);

	return 0;
}
#endif

// 10250 : ACM 호텔
#if 0

int main() {

	int t, h, w, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		n--;

		printf("%d%02d\n", n%h + 1, n / h + 1);
	}

	return 0;
}
#endif

// 1011 : Fly me to the Alpha Centauri
#if 0

int sol(int remain, int speed) {
	int ret = 0;
	while (remain > 0) {
		if (remain > speed * 2) {
			ret += 2;
			remain -= speed * 2;
			speed++;
		}
		else {
			int cnt = remain / speed;
			remain -= cnt * speed;
			ret += cnt;
			speed--;
		}
	}
	return ret;
}

int main() {

	int t, x, y;
	int dist;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);

		dist = y - x;

		int res = sol(dist, 1);

		printf("%d\n", res);
	}

	return 0;
}
#endif

// 6064 : 카잉 달력
#if 1

int gcd(int a, int b) {
	if (a%b == 0)
		return b;

	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a*b) / gcd(a, b);
}

int main() {

	int tc;
	int m, n, x, y, x2, y2;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d %d %d", &m, &n, &x, &y);

		int maxYear = lcm(m, n);

		while (1) {
			if (x > maxYear || (x - 1) % n + 1 == y)
				break;
			x += m;
		}
		if (x > maxYear)
			printf("-1\n");
		else
			printf("%d\n", x);
	}

	return 0;
}
#endif