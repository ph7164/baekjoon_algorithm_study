#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#if 0
int main() {

	return 0;
}
#endif

// 11654 : 아스키코드
#if 0
int main() {

	char d;
	scanf("%c", &d);
	printf("%d", d);

	return 0;
}
#endif

// 10809 : 알파벳 찾기
#if 0

int number[26];
char voca[101];
int index;

int main() {

	scanf("%s", voca);

	for (int i = 0; i < 26; i++) {
		number[i] = -1;
	}

	for (int i = 0; voca[i] != '\0'; i++) {
		index = voca[i] - 97;
		if (number[index] == -1) {
			number[index] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", number[i]);
	}

	return 0;
}
#endif

// 2675 : 문자열 반복
#if 0
int main() {

	int tc, r;
	char s[21];
	int len;

	scanf("%d", &tc);

	for (int i = 0; i < tc; i++) {
		
		scanf("%d %s", &r, s);
		len = 0;

		while (s[len] != '\0') {
			for (int j = 0; j < r; j++) {
				printf("%c", s[len]);
			}
			len++;
		}
		printf("\n");


	}

	return 0;
}
#endif

// 1157 : 단어 공부
#if 0
int main() {

	char s[1000 * 1000];
	int cnt, max, a = 0, k;
	int arr[26];

	scanf("%s", s);

	for (int i = 65; i < 91; i++) {
		cnt = 0;
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == i || s[j] == i + 32)
				cnt++;
		}
		arr[i - 65] = cnt;
	}

	max = arr[0];

	for (int i = 1; i < 26; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 26; i++) {
		if (max == arr[i]) {
			a++;
			k = i;
		}
	}

	if (a == 1) {
		printf("%c \n", k + 65);
	}
	else if (a > 1)
		printf("? \n");

	return 0;
}
#endif

// 1316 : 그룹 단어 체커
#if 0
int main() {

	int num;
	int cnt = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		char s[100];
		scanf("%s", s);
		bool alphabet[26] = { 0 };
		bool overlap = false;
		int aryNum;

		for (int j = 0; s[j]; j++) {
			if (s[j] < 91)
				aryNum = s[j] - 65;
			else
				aryNum = s[j] - 97;

			if (alphabet[aryNum]) {
				if (s[j - 1] != s[j]) {
					overlap = true;
					break;
				}
			}
			else
				alphabet[aryNum] = true;
		}
		if (!overlap)
			cnt++;

	}
	printf("%d", cnt);

	return 0;
}
#endif

// 2908 : 상수
#if 0
int main() {

	int a, b, ra, rb;
	int h[2], t[2], o[2];

	scanf("%d %d", &a, &b);

	h[0] = a / 100;
	t[0] = (a % 100) / 10;
	o[0] = (a % 100) % 10;

	ra = ((o[0] * 100) + (t[0] * 10) + h[0]);

	h[1] = b / 100;
	t[1] = (b % 100) / 10;
	o[1] = (b % 100) % 10;

	rb = ((o[1] * 100) + (t[1] * 10) + h[1]);

	if (ra < rb) {
		printf("%d", rb);
	}
	else {
		printf("%d", ra);
	}

	return 0;
}
#endif

// 5622 : 다이얼
#if 0

int transform(char c) {
	int num;

	switch (c) {
	case 'A':
	case 'B':
	case 'C':
		num = 2;
		break;
	case 'D':
	case 'E':
	case 'F':
		num = 3;
		break;
	case 'G':
	case 'H':
	case 'I':
		num = 4;
		break;
	case 'J':
	case 'K':
	case 'L':
		num = 5;
		break;
	case 'M':
	case 'N':
	case 'O':
		num = 6;
		break;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		num = 7;
		break;
	case 'T':
	case 'U':
	case 'V':
		num = 8;
		break;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		num = 9;
		break;
	default:
		break;
	}
	return num;
}

int main() {

	char s[15];
	int sum = 0;

	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 0) {
			sum += 10;
		}
		else if (s[i] == 1) {
			sum += 1;
		}
		else {
			sum += transform(s[i]);
		}
	}

	sum += (int)strlen(s);

	printf("%d", sum);
	return 0;
}
#endif

// 2942 : 크로아티아 알파벳
#if 1

int main() {

	char s[100];
	int i = 0, cnt = 0;

	scanf("%s", s);

	while (i < strlen(s)) {
		if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
			i++;
		else if (s[i] == 'd') {
			if (s[i + 1] == '-') i++;
			else if (s[i + 1] == 'z'&&s[i + 2] == '=') i += 2;
		}
		else if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j') i++;
		else if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') i++;
		i++; cnt++;
	}
	printf("%d", cnt);

	return 0;
}
#endif