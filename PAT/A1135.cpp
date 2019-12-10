//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//const int maxv = 40;
//struct Node {
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//
//int K, N;
//
//int pre[maxv], in[maxv];
//
//bool cmp(int a, int b) {
//	return abs(a) < abs(b);
//}
//
//Node* Create(int preL, int preR, int inL, int inR) {
//	if (preL > preR) {
//		return NULL;
//	}
//
//	Node* root = new Node;
//
//	root->data = pre[preL];
//	int k = -1;
//	for (k = inL;k <= inR;k++) {
//		if (in[k] == pre[preL]) {
//			break;
//		}
//	}
//	if (k == -1) {
//		return NULL;
//	}
//	int numLeft = k - inL;
//
//	root->lchild = Create(preL + 1, preL + numLeft, inL, k - 1);
//	root->rchild = Create(preL + numLeft + 1, preR, k + 1, inR);
//
//	return root;
//}
//
//void BFS(Node* root) {
//	queue<Node*> q;
//	q.push(root);
//	if (root->data < 0) {
//		printf("No\n");
//		return;
//	}
//	while (!q.empty()) {
//		Node* front = q.front();
//		q.pop();
//		if (front->lchild != NULL) {
//			if ((front->lchild->data * front->data) < 0) {
//				q.push(front->lchild);
//			}
//			else {
//				printf("No\n");
//				return;
//			}
//		}
//		if (front->rchild != NULL) {
//			if ((front->rchild->data * front->data) < 0) {
//				q.push(front->rchild);
//			}
//			else {
//				printf("No\n");
//				return;
//			}
//		}
//	}
//	printf("Yes\n");
//}
//int main() {
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		cin >> N;
//		for (int j = 0;j < N;j++) {
//			cin >> pre[j];
//			in[j] = pre[j];
//		}
//		sort(in, in + N, cmp);
//		Node* root = Create(0, N - 1, 0, N - 1);
//		if (root == NULL) {
//			printf("No\n");
//		}
//		else {
//			BFS(root);
//		}
//	}
//
//	return 0;
//}