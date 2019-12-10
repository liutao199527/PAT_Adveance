//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//const int maxv = 30;
//int N;
//int root;
//
//struct Node {
//	char str[10];
//	int lchild;
//	int rchild;
//	bool isOpt = false;
//}node[maxv];
//
//queue<int> q;
//bool isRoot[maxv];
//int flag = 0;
//void inOrder(int r) {
//	if (r == -1) {
//		return;
//	}
//	if ((node[r].lchild != -1 || node[r].rchild != -1) && r != root) {
//		printf("(");
//	}
//	inOrder(node[r].lchild);
//	printf("%s", node[r].str);
//	inOrder(node[r].rchild);
//	if ((node[r].lchild != -1 || node[r].rchild != -1) && r != root) {
//		printf(")");
//	}
//}
//void findRoot() {
//	for (int i = 1;i <= N;i++) {
//		if (isRoot[i] == true) {
//			root = i;
//		}
//	}
//}
//
//int main() {
//	fill(isRoot, isRoot + maxv, true);
//	cin >> N;
//	for (int i = 1;i <= N;i++) {
//		cin >> node[i].str >> node[i].lchild >> node[i].rchild;
//		if (node[i].lchild != -1) {
//			isRoot[node[i].lchild] = false;
//		}
//		if (node[i].rchild != -1) {
//			isRoot[node[i].rchild] = false;
//		}
//		if (strcmp(node[i].str, "+") == 0 || strcmp(node[i].str, "-") == 0 || strcmp(node[i].str, "*") == 0 || strcmp(node[i].str, "/") == 0 || strcmp(node[i].str, "%") == 0) {
//			node[i].isOpt = true;
//		}
//	}
//	findRoot();
//	inOrder(root);
//	//showResult();
//
//	return 0;
//}