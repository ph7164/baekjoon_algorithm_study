#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	return 0;
}
#endif

// 10845 : 큐
#if 0

int n;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			int num;
			cin >> num;

			q.push(num);
		}
		else if (command == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (command == "size") {
			cout << q.size() << endl;
		}
		else if (command == "empty") {
			cout << q.empty() << endl;
		}
		else if (command == "front") {
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << -1 << endl;
		}
		else if (command == "back") {
			if (!q.empty()) {
				int curSize = q.size();
				for (int j = 0; j < curSize - 1; j++) {
					int num = q.front();
					q.pop();
					q.push(num);
				}
				int num = q.front();
				q.pop();
				cout << num << endl;
				q.push(num);
			}
			else
				cout << -1 << endl;
		}
	}

	return 0;
}
#endif

// 11866 : 조세퍼스 문제 0
#if 0
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int n, m;
	queue<int> q;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < m - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
	}
	cout << ">" << endl;

	return 0;
}
#endif

// 1260 : dfs와 bfs
#if 1

#define max 1000+10

int n, m, v;
int mat[max][max];
int visit[max];

void dfs(int v) {
	cout << v << ' ';
	visit[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 1 || mat[v][i] == 0)
			continue;
		dfs(i);
	}
}

void bfs(int v) {
	queue<int> q;
	q.push(v);
	visit[v] = 0;
	while (!q.empty()) {
		v = q.front();
		cout << q.front() << ' ';
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (visit[i] == 0 || mat[v][i] == 0)
				continue;
			q.push(i);
			visit[i] = 0;
		}
	}
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

	int x, y;

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		mat[x][y] = mat[y][x] = 1;
	}
	dfs(v);
	cout << '\n';
	bfs(v);

	return 0;
}
#endif