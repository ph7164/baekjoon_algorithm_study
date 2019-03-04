#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>

using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	return 0;
}
#endif

// 10866 : 덱
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int n;
	deque<int> deq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push_front") {
			int num;
			cin >> num;

			deq.push_front(num);
		}
		else if (command == "push_back") {
			int num;
			cin >> num;

			deq.push_back(num);
		}
		else if (command == "pop_front") {
			if (!deq.empty()) {
				cout << deq.front() << endl;
				deq.pop_front();
			}
			else
				cout << -1 << endl;
		}
		else if (command == "pop_back") {
			if (!deq.empty()) {
				cout << deq.back() << endl;
				deq.pop_back();
			}
			else
				cout << -1 << endl;
		}
		else if (command == "size") {
			cout << deq.size() << endl;
		}
		else if (command == "empty") {
			cout << deq.empty() << endl;
		}
		else if (command == "front") {
			if (!deq.empty())
				cout << deq.front() << endl;
			else
				cout << -1 << endl;
		}
		else if (command == "back") {
			if (!deq.empty())
				cout << deq.back() << endl;
			else
				cout << -1 << endl;
		}
	}

	return 0;
}
#endif

// 1021 : 회전하는 큐
#if 1

deque<int> deq;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int n, m;
	int cnt = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		deq.push_back(i);
	}

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		int index;
		for (int j = 0; j < deq.size(); j++) {
			if (deq[j] == num) {
				index = j;
				break;
			}
		}
		if (index < deq.size() - index) {
			for (;;) {
				if (deq.front() == num) {
					deq.pop_front();
					break;
				}
				++cnt;
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		else {
			for (;;) {
				if (deq.front() == num) {
					deq.pop_front();
					break;
				}
				++cnt;
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}

	}

	cout << cnt;

	return 0;
}
#endif