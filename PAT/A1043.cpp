//#include <cstdio>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct node {
//	int data;
//	node* lchild;
//	node* rchild;
//};
//
//void insert(node*& root, int data) {
//	if (root == NULL) {
//		root = new node;
//		root->data = data;
//		root->lchild = root->rchild = NULL;
//		return;
//	}
//
//	if (data < root->data) insert(root->lchild, data);
//	else insert(root->rchild, data);
//}
//
//void preOrder(node* root, vector<int>& vi) {
//	if (root == NULL) return;
//	vi.push_back(root->data);
//	preOrder(root->lchild, vi);
//	preOrder(root->rchild, vi);
//}
//
////镜像树先序遍历
//void preOrderMirror(node* root, vector<int>& vi) {
//	if (root == NULL) return;
//	vi.push_back(root->data);
//	preOrderMirror(root->rchild, vi);
//	preOrderMirror(root->lchild, vi);
//}
//
//
//void postOrder(node* root, vector<int>& vi) {
//	if (root == NULL) return;
//	postOrder(root->lchild, vi);
//	postOrder(root->rchild, vi);
//	vi.push_back(root->data);
//}
//
////镜像树后序遍历
//void postOrderMirror(node* root, vector<int>& vi) {
//	if (root == NULL) return;
//	postOrderMirror(root->rchild, vi);
//	postOrderMirror(root->lchild, vi);
//	vi.push_back(root->data);
//}
//
////origin为初始序列，pre,post为先序，后序，preM,postM为镜像树先序，后序
//vector<int> origin, pre, post, preM, postM;
//int main() {
//	int n, data;
//	node* root = NULL;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> data;
//		origin.push_back(data);
//		insert(root, data);
//	}
//
//	preOrder(root, pre);
//	preOrderMirror(root, preM);
//	postOrder(root, post);
//	postOrderMirror(root, postM);
//
//	if (origin == pre) {
//		printf("YES\n");
//		for (int i = 0;i < post.size();i++) {
//			printf("%d", post[i]);
//			if (i < post.size() - 1) printf(" ");
//		}
//	}
//	else if (origin == preM) {
//		printf("Yes\n");
//		for (int i = 0;i < postM.size();i++) {
//			printf("%d", postM[i]);
//			if (i < postM.size() - 1) printf(" ");
//		}
//	}
//	else {
//		printf("NO\n");
//	}
//
//	return 0;
//}