//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//const int maxv = 1010;
//int n, L; //用户数目，访问层数
//
//struct node {
//	int id; //结点编号
//	int layer; //结点层号
//};
//
//
//vector<node> Adj[maxv]; //邻接表
//bool inq[maxv] = { false }; //顶点是否已被加入过队列
//
//int BFS(int v,int L) {
//	int numForward = 0;
//	queue<node> q;
//	node start;
//	start.id = v;
//	start.layer = 0;
//	q.push(start);
//	inq[start.id] = true;
//	while (!q.empty()) {
//		node top = q.front();
//		q.pop();
//		if (top.layer > L) return numForward;
//		else {
//			numForward++; //这里会把一开始发消息的人算进来
//			for (int i = 0;i < Adj[top.id].size();i++) {
//				node next = Adj[top.id][i];
//				next.layer = top.layer + 1;
//				if (inq[next.id] == false) {
//					q.push(next);
//					inq[next.id] = true;
//				}
//			}
//		}
//	}
//
//	return numForward;
//}
//
//int main() {
//	node user;
//	cin >> n >> L;
//	int numFollow, idFollow;
//	for (int i = 1;i <= n;i++) {
//		user.id = i;
//		cin >> numFollow;
//		for (int j = 0;j < numFollow;j++) {
//			cin >> idFollow;
//			Adj[idFollow].push_back(user);
//		}
//	}
//
//	int numQuery, s;
//	cin >> numQuery;
//	for (int i = 0;i < numQuery;i++) {
//		fill(inq, inq + n + 1, false);
//		cin >> s;
//		int numFoward = BFS(s, L);
//		printf("%d\n", numFoward-1);
//	}
//
//	return 0;
//
//}
