//#include <iostream>
//
//using namespace std;
//const int maxv = 1010;
//int a[maxv];
//int N;
//int maxdepth = 0;
//int n1=0, n2=0;
//
//struct node {
//	int data;
//	node* lchild;
//	node* rchild;
//	int depth;
//};
//
//node* newNode(int v) {
//	node* Node = new node;
//	Node->data = v;
//	Node->lchild = Node->rchild = NULL;
//
//	return Node;
//}
//
//void insert(node* &root, int x,int depth) {
//	if (root == NULL) {
//		root = newNode(x);
//		root->depth = depth;
//		if (depth > maxdepth) {
//			maxdepth = depth;
//		}
//		return;
//	}
//
//	if (x <= root->data) {
//		insert(root->lchild, x,depth+1);
//	}
//	else {
//		insert(root->rchild, x,depth+1);
//	}
//}
//
//node* Create(int data[], int n) {
//	node* root = NULL;
//	for (int i = 0;i < n;i++) {
//		insert(root, data[i],1);
//	}
//
//	return root;
//}
//
//void DFS(node* root,int depth1,int depth2) {
//	if (root == NULL) {
//		return;
//	}
//	if (root->depth == depth1) {
//		n1++;
//	}
//	if (root->depth == depth2) {
//		n2++;
//	}
//	DFS(root->lchild, depth1, depth2);
//	DFS(root->rchild, depth1, depth2);
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> a[i];
//	}
//
//	node* root = Create(a,N);
//	int depth1 = maxdepth;
//	int depth2 = maxdepth - 1;
//	DFS(root, depth1, depth2);
//
//	printf("%d + %d = %d", n1, n2, n1 + n2);
//
//	return 0;
//}
