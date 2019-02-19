#include<stdio.h>
#include<string.h>

#if 0

int main(void) {

	return 0;
}

#endif

// 2741
#if 0

int main(void) {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		printf("%d\n", i);
	}

	return 0;
}

#endif

// 2742
#if 0
int main(void) {

	int N;
	scanf("%d", &N);

	for (int i = N; i >= 1; i--) {
		printf("%d\n", i);
	}

	return 0;
}

#endif

// 2739
#if 0

int main(void) {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", N, i, N*i);
	}

	return 0;
}

#endif

// 2438
#if 0

int main(void) {

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif

// 2439
#if 0

int main(void) {

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < N - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif

// 2440
#if 0

int main(void) {

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= N - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif

// 2441
#if 0

int main(void) {

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i-1; j++) {
			printf(" ");
		}
		for (int j = 0; j <= N - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif

// 1924
#if 0

int main(void) {

	int x, y;
	int cnt = 0;
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	scanf("%d %d", &x, &y);

	for (int i = 1; i < x; i++) {
		cnt += date[i - 1];
	}
	cnt += y;

	switch (cnt % 7) {
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}

	return 0;
}

#endif

// 8393
#if 0

int main(void) {

	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}

#endif

// 11720
#if 0

int main(void) {

	int N;
	int num[100];
	int sum = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%1d", &num[i]);
	}

	for (int i = 0; i < N; i++) {
		sum += num[i];
	}
	printf("%d", sum);

	return 0;
}

#endif

// 11721
#if 0

int main(void) {

	char arr[100];

	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		if ((i+1) % 10 == 0)
			printf("\n");
	}

	return 0;
}

#endif

// 15552
#if 1

int main(void) {

	int T;
	int a, b;

	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}

#endif