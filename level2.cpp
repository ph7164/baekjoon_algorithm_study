#include<stdio.h>

#if 0

int main(void) {

	return 0;
}

#endif

// 10998
#if 0

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d", a*b);

	return 0;
}

#endif

// 1008
#if 0

int main(void) {
	double a, b;
	scanf("%lf %lf", &a, &b);

	printf("%.9lf", a / b);

	return 0;
}

#endif

// 10869
#if 0

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d \n", a + b);
	printf("%d \n", a - b);
	printf("%d \n", a * b);
	printf("%d \n", a / b);
	printf("%d \n", a % b);

	return 0;
}

#endif

// 10430
#if 0

int main(void) {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", (a%c + b % c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d", (a%c*b%c) % c);


	return 0;
}

#endif

// 2558
#if 0

int main(void) {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d", a + b);

	return 0;
}

#endif

// 2839
#if 1

int main(void) {

	int N, three, five;

	scanf("%d", &N);

	five = N / 5;
	N %= 5;

	while (five >= 0) {
		if (!(N % 3)) {
			three = N / 3;
			N %= 3;
			break;
		}
		five--;
		N += 5;
	}
	printf("%d", N == 0 ? five + three : -1);

	return 0;
}

#endif
