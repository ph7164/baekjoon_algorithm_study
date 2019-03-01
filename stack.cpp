#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
;
using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	return 0;
}
#endif

// 10828 : 스택
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int n;
	cin >> n;

	stack<int> st;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "size") {
			cout << st.size() << endl;
		}
		else if (str == "empty") {
			if (st.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (str == "top") {
			if (!st.empty()) {
				cout << st.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}
#endif

// 9012 : 괄호
#if 0

bool Check(string str) {
	int len = (int)str.length();
	stack<char> st;

	for (int i = 0; i < len; i++) {
		char c = str[i];

		if (c == '(') {
			st.push(str[i]);
		}
		else {
			if (!st.empty())
				st.pop();
			else
				return false;
		}
	}

	return st.empty();
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int n;
	cin >> n;
	
	string input;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (Check(input)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
#endif

// 2504 : 괄호의 값
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int mul = 1;
	int sum = 0;
	stack<char> st;
	bool wrong = false;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			mul *= 2;
			st.push('(');
		}
		else if (str[i] == '[') {
			mul *= 3;
			st.push('[');
		}
		else if (str[i] == ')') {
			if (str[i - 1] == '(')
				sum += mul;
			if (st.empty()) {
				wrong = true;
				break;
			}
			if (st.top() == '(')
				st.pop();
			mul /= 2;
		}
		else {
			if (str[i - 1] == '[')
				sum += mul;
			if (st.empty()) {
				wrong = true;
				break;
			}
			if (st.top() == '[')
				st.pop();
			mul /= 3;
		}
	}
	if (wrong || !st.empty())
		cout << 0;
	else
		cout << sum;

	return 0;
}
#endif

// 1874 : 스택 수열
#if 1

int n;
int arr[100000+10];
stack<int> st;
vector<char> ans;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int it = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (st.empty() || st.top() != arr[i]) {
			while (true) {
				if (it > n) {
					puts("NO");
					return 0;
				}
				st.push(it++);
				ans.push_back('+');
				if (st.top() == arr[i]) {
					st.pop();
					ans.push_back('-');
					break;
				}
			}
		}
		else if (st.top() == arr[i]) {
			st.pop();
			ans.push_back('-');
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}

	return 0;
}
#endif