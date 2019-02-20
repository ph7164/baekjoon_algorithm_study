#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#if 0
int main() {

	return 0;
}
#endif

// 4673 : ¼¿ÇÁ ³Ñ¹ö
#if 0

#define N 10001

int arr[N];

int dn(int n) {
	int result = n;

	while (n != 0) {
		result += n % 10;
		n = n / 10;
	}
	return result;
}

int main() {

	for (int i = 0; i < N; i++) {
		arr[i] = 1;
	}
	for (int i = 1; i < N; i++) {
		int idx = dn(i);
		if (idx <= N)
			arr[idx] = 0;
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] != 0)
			printf("%d\n", i);
	}

	return 0;
}
#endif

// 1065 : ÇÑ¼ö
#if 0
int main() {

	int n, han;
	int arr[3];
	int k, t;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i < 100)
			han = i;
		else if (i == 1000)
			break;
		else {
			k = 0;
			t = i;
			while (t > 0) {
				arr[k] = t % 10;
				t /= 10;
				k++;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2])
				han++;
		}
	}
	printf("%d", han);

	return 0;
}
#endif

// 2448 : º°Âï±â - 11
#if 1

char arr[3072][6144];

void star(int n, int x, int y) {
	if (n == 3) {
		arr[y][x] = '*';

		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';

		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
	}
	else {
		star(n / 2, x, y);
		star(n / 2, x - n / 2, y + n / 2);
		star(n / 2, x - n / 2 + n, y + n / 2);
	}
}

int main() {

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			arr[i][j] = ' ';
		}
	}

	star(n, n - 1, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif