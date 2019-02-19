#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#if 0
int main() {

	return 0;
}
#endif

// 9498 : 시험성적
#if 0
int main() {

	int score;

	scanf("%d", &score);

	if (score >= 90 && score <= 100) {
		printf("A\n");
	}
	else if (score >= 80 && score < 90) {
		printf("B\n");
	}
	else if (score >= 70 && score < 80) {
		printf("C\n");
	}
	else if (score >= 60 && score < 70) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	return 0;
}
#endif

// 10817 : 세 수
#if 0
int main() {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			if (b > c)
				printf("%d", b);
			else
				printf("%d", c);
		}
		else
			printf("%d", a);
	}
	else {
		if (b > c) {
			if (a > c)
				printf("%d", a);
			else
				printf("%d", c);
		}
		else
			printf("%d", b);
	}

	return 0;
}
#endif

// 10871 : X보다 작은 수
#if 0
int main() {

	int n, x;
	int a;

	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &a);

		if (a < x)
			printf("%d ", a);
	}

	return 0;
}
#endif

// 1546 : 평균
#if 0
int main() {

	int n;
	int max = 0;
	int score[1000] = { 0 };
	double sum = 0.0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);

		max < score[i] ? (max = score[i]) : max;
	}

	for (int i = 0; i < n; i++) {
		sum += (double)score[i] / (double)max*100.0;
	}
	printf("%.2lf", sum / (double)n);

	return 0;
}
#endif

// 4344 : 평균은 넘겠지
#if 0
int main() {

	int c;
	int n;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		int sum = 0;
		int score[1000] = { 0 };
		double avg = 0.0;

		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (avg < score[j]) {
				count++;
			}
		}
		printf("%.3f%%\n", (double)count * 100 / n);
	}

	return 0;
}
#endif

// 1110 : 더하기 사이클
#if 1
int main() {

	int n;
	int cnt = 0;
	int a, b, c;
	int add;

	scanf("%d", &n);
	add = n;

	while (1) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		n = (b * 10) + c;
		cnt++;
		if (n == add)
			break;
	}
	printf("%d", cnt);

	return 0;
}
#endif
