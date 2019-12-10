//#include <cstdio>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//const int maxv = 1010;
//struct Node {
//	int id;
//	int layer;
//};
//
//vector<Node> adj[maxv];
//bool inq[maxv] = { false }; //判断顶点是否加入过队列
//
//int BFS(int s, int L) {
//	int numForward = 0;//转发数
//	queue<Node> q;
//	Node start;
//	start.id = s;
//	start.layer = 0;
//	q.push(start);
//	inq[start.id] = true;
//	while (!q.empty()) {
//		Node topNode = q.front();
//		q.pop();
//		int u = topNode.id;
//		for (int i = 0;i < adj[u].size();i++) {
//			Node next = adj[u][i];
//			next.layer = topNode.layer + 1;
//			if (inq[next.id] == false && next.layer <= L) {
//				q.push(next);
//				inq[next.id] = true;
//				numForward++;
//			}
//		}
//	}
//
//	return numForward;
//}
//
//int main() {
//	Node user;
//	int n, L, numFollow, idFollow;
//	cin >> n >> L;
//	for (int i = 1;i <= n;i++) {
//		user.id = i;
//		cin >> numFollow;
//		for (int j = 0;j < numFollow;j++) {
//			cin >> idFollow;
//			adj[idFollow].push_back(user);
//		}
//	}
//
//	int numQuery, s;
//	cin >> numQuery;
//	for (int i = 0;i < numQuery;i++) {
//		memset(inq, false, sizeof(inq));
//		cin >> s;
//		int numForward = BFS(s, L);
//		cout << numForward << endl;
//	}
//
//	return 0;
//}
//
//
//
