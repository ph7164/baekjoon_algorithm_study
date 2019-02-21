#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#if 0
int main() {

	return 0;
}
#endif

// 1152 : 단어의 개수
#if 0

char str[1000001];

int main() {

	int cnt = 1;
	int isSpace = 1;

	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' && str[i-1]==' ')
			continue;
		else if (str[i]==' ') {
			cnt++;
		}
	}
	if (str[0] == ' ')
		cnt--;
	if (str[strlen(str) - 2] == ' ')
		cnt--;

	printf("%d", cnt);

	return 0;
}
#endif

// 2557 : 숫자의 개수
#if 0
int main() {

	int a, b, c;
	int num;
	int arr[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);
	num = a * b * c;

	while (num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
#endif

// 8958 : OX퀴즈
#if 0
int main() {

	int n, score, sum;
	char arr[81] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		score = 1;
		sum = 0;

		scanf("%s", &arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			if (arr[j] == 'X') {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}
#endif

// 2920 : 음계
#if 0
int main() {

	int arr[8] = { 0 };
	int as = 0, des = 0, mix = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%1d", &arr[i]);

		if (i + 1 == arr[i])
			as++;
		else if (8 - i == arr[i])
			des++;
		else
			mix++;
	}

	if (as == 8)
		printf("ascending");
	else if (des == 8)
		printf("descending");
	else
		printf("mixed");


	return 0;
}
#endif

// 10039 : 평균점수
#if 1
int main() {

	int arr[5] = { 0 };
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] < 40)
			arr[i] = 40;
		sum += arr[i];
	}
	printf("%d", sum / 5);

	return 0;
}
#endif