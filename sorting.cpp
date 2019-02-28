#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
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

// 2750 : 수 정렬하기
#if 0

int num[1000];

int main() {

	int n, temp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < n - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}
#endif

// 1427 : 소트인사이드
#if 0
int main() {

	char num[13] = { 0 };
	char temp;
	int length;

	scanf("%s", num);

	for (int i = 0; i < strlen(num); i++) {
		for (int j = 0; j < strlen(num); j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%s", num);
	return 0;
}
#endif

// 1181 : 단어 정렬
#if 0

bool cmp(const string &a, const string &b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {

	int n;
	string a[20001];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	sort(a + 1, a + n + 1, cmp);

	for (int i = 1; i <= n; i++) {
		if (a[i] != a[i + 1])
			cout << a[i] << '\n';
	}

	return 0;
}
#endif

// 2751 : 수 정렬하기2
#if 0

int n;
int arr[1000000];
int tempArr[1000000];

void merge(int low, int mid, int high){
	int i = low, j = mid + 1, k = low;

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
			tempArr[k] = arr[i++];
		else
			tempArr[k] = arr[j++];
		k++;
	}

	if (i > mid)
		for (int idx = j; idx <= high; idx++)
			tempArr[k++] = arr[idx];
	else
		for (int idx = i; idx <= mid; idx++)
			tempArr[k++] = arr[idx];

	for (int idx = low; idx <= high; idx++)
		arr[idx] = tempArr[idx];
}

void mergeSort(int low, int high) {

	if (high > low)
	{
		int mid = (low + high) / 2;
		mergeSort(low, mid);
		mergeSort(mid + 1, high);
		merge(low, mid, high);
	}
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	mergeSort(0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
#endif

// 2108 : 통계학
#if 1

int n;
int arr[500000];
int visited[8001];
float avg;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> n;

	float sum = 0;
	int maxNum = -4000;
	int minNum = 4000;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		sum += arr[i];
		visited[arr[i] + 4000]++;
		maxNum = max(maxNum, arr[i]);
		minNum = min(minNum, arr[i]);
	}

	avg = sum / n;
	if (avg >= 0)
		cout << int(avg + 0.5) << "\n";
	else
		cout << int(avg - 0.5) << "\n";

	sort(arr, arr + n);
	cout << arr[n / 2] << "\n";

	int num = -1;
	int cur = 0;
	bool second = false;
	for (int i = 0; i <= 8000; i++) {
		if (cur < visited[i]) {
			cur = visited[i];
			num = i;
			second = false;
		}
		else if (cur == visited[i] && !second) {
			num = i;
			second = true;
		}
	}
	cout << num - 4000 << "\n";

	cout << maxNum - minNum << "\n";
	
	
	return 0;
}
#endif