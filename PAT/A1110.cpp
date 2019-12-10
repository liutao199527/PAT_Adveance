//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//const int maxv = 30;
//queue<int> q;
//int a[maxv];
//
//struct node {
//	int lchild;
//	int rchild;
//}Node[maxv];
//
//bool isRoot[maxv];
//int N;
//
//int findRoot() {
//	int root;
//	for (int i = 0;i < N;i++) {
//		if (isRoot[i]) {
//			root = i;
//		}
//	}
//	return root;
//}
//
//void DFS(int root, int i) {
//	if (root == -1) {
//		return;
//	}
//
//	a[i] = root;
//	DFS(Node[root].lchild, 2 * i);
//	DFS(Node[root].rchild, 2 * i + 1);
//}
//int main() {
//	fill(isRoot, isRoot + maxv, true);
//	fill(a, a + maxv, -1);
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		string u, v;
//		cin >> u >> v;
//		if (u == "-") {
//			Node[i].lchild = -1;
//		}
//		else {
//			Node[i].lchild = stoi(u);
//			isRoot[stoi(u)] = false;
//		}
//		if (v == "-") {
//			Node[i].rchild = -1;
//		}
//		else {
//			Node[i].rchild = stoi(v);
//			isRoot[stoi(v)] = false;
//		}
//	}
//	int root = findRoot();
//	DFS(root, 1);
//	for (int i = 1;i < N;i++) {
//		if (a[i] == -1) {
//			printf("NO %d", root);
//			return 0;
//		}
//	}
//	printf("YES %d", a[N]);
//	return 0;
//}