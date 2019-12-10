//#include <iostream>
//#include <vector>
//
//using namespace std;
//const int maxv = 100010;
//
//int N, M;
//int pre[maxv];
//int father[maxv];
//bool intree[maxv];
//struct Node {
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//
//Node* newNode(int x) {
//	Node* root = new Node;
//	root->data = x;
//	root->lchild = root->rchild = NULL;
//	return root;
//}
//
//void insert(Node* &root, int x) {
//	if (root == NULL) {
//		root = newNode(x);
//		return;
//	}
//	if (x < root->data) {
//		father[x] = root->data;
//		insert(root->lchild, x);
//	}
//	else {
//		father[x] = root->data;
//		insert(root->rchild, x);
//	}
//}
//
//Node* Create() {
//	Node* root = NULL;
//	for (int i = 0;i < N;i++) {
//		insert(root, pre[i]);
//	}
//
//	return root;
//}
//void init() {
//	for (int i = 0;i < maxv;i++) {
//		father[i] = i;
//	}
//}
//void showResult(vector<int> v1,vector<int> v2,bool flag1,bool flag2,int u1,int u2) {
//	if (flag1 && flag2) {
//		int i = v1.size()-1;int j = v2.size()-1;
//		while (i >= 0 && j >= 0) {
//			if (v1[i] != v2[j]) {
//				if (v1[i] == u2) {
//					printf("%d is an ancestor of %d.\n", u2, u1);
//					return;
//				}
//				else if (v2[j] == u1) {
//					printf("%d is an ancestor of %d.\n", u1, u2);
//					return;
//				}
//				else {
//					if (j > i) {
//						j--;
//					}
//					else if (j == i) {
//						j--;
//						i--;
//					}
//					else {
//						i--;
//					}
//				}
//			}
//			else {
//				printf("LCA of %d and %d is %d.\n", u1, u2, v1[i]);
//				return;
//			}
//		}
//	}
//	else {
//		if (flag1 == false && flag2 == true) {
//			printf("ERROR: %d is not found.\n", u1);
//		}
//		else if (flag1 == true && flag2 == false) {
//			printf("ERROR: %d is not found.\n", u2);
//		}
//		else {
//			printf("ERROR: %d and %d are not found.\n", u1, u2);
//		}
//	}
//}
//int main() {
//	cin >> M >> N;
//	fill(intree, intree + maxv, false);
//	for (int i = 0;i < N;i++) {
//		int temp;
//		cin >> temp;
//		pre[i] = temp;
//		intree[temp] = true;
//	}
//	init();
//	Node* root = Create();
//	for (int i = 0;i < M;i++) {
//		int u1, u2;
//		cin >> u1 >> u2;
//		int flag1, flag2;
//		vector<int> v1;vector<int> v2;
//		flag1 = intree[u1];flag2 = intree[u2];
//	}
//
//	return 0;
//}