//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int maxn = 110;
//
//struct node {
//	int data;
//	int left;
//	int right;
//}Node[maxn];
//
//int index = 0,num =0, n;
//int number[maxn];
//
//void inOrder(int root) {
//	if (root == -1) return;
//	inOrder(Node[root].left);
//	Node[root].data = number[index++];
//	inOrder(Node[root].right);
//}
//
//void BFS(int root) {
//	queue<int> q;
//	q.push(root);
//	while (!q.empty()) {
//		int front = q.front();
//		q.pop();
//		num++;
//		printf("%d", Node[front].data);
//		if (num < n) printf(" ");
//		if (Node[front].left != -1)q.push(Node[front].left);
//		if (Node[front].right != -1)q.push(Node[front].right);
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> Node[i].left >> Node[i].right;
//	}
//
//	for (int i = 0;i < n;i++) {
//		cin >> number[i];
//	}
//
//	sort(number, number + n);
//	inOrder(0);
//	BFS(0);
//
//	return 0;
//}