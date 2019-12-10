//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//struct node {
//	int v, height;//vΪ�ڵ�Ȩֵ��heightΪ��ǰ�����ĸ߶�
//	node* lchild;
//	node* rchild;
//};
//
////����һ���½ڵ㣬vΪ�ڵ�Ȩֵ
//node* newNode(int v) {
//	node* Node = new node;
//	Node->v = v;
//	Node->height = 1;
//	Node->lchild = Node->rchild = NULL;
//	return Node;
//}
//
////��ȡ��rootΪ���ڵ�������ĵ�ǰheight
//int getHeight(node* root) {
//	if (root == NULL) return 0;
//	return root->height;
//}
//
////���½ڵ�root��height
//void updataHeight(node* root) {
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
//}
//
////����ƽ������
//int getBalanceFactor(node* root) {
//	return getHeight(root->lchild) - getHeight(root->rchild);
//}
//
////����(left Rotation)
//void L(node*& root) {
//	node* temp = root->rchild;
//	root->rchild = temp->lchild;
//	temp->lchild = root;
//	updataHeight(root);
//	updataHeight(temp);
//	root = temp;
//}
//
////����(right Rotation)
//void R(node*& root) {
//	node* temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	updataHeight(root);
//	updataHeight(temp);
//	root = temp;
//}
//
////����ȨֵΪv�Ľڵ�
//void insert(node*& root, int v) {
//	if (root == NULL) {
//		//����սڵ�
//		root = newNode(v);
//		return;
//	}
//
//	if (v < root->v) {
//		insert(root->lchild, v);
//		updataHeight(root);
//		if (getBalanceFactor(root) == 2) {
//			if (getBalanceFactor(root->lchild) == 1) {
//				R(root);
//			}
//			else if (getBalanceFactor(root->lchild) == -1) {
//				L(root->lchild);
//				R(root);
//			}
//		}
//	}
//	else {
//		insert(root->rchild, v);
//		updataHeight(root);
//		if (getBalanceFactor(root) == -2) {
//			if (getBalanceFactor(root->rchild) == -1) {
//				L(root);
//			}
//			else if (getBalanceFactor(root->rchild) == 1) {
//				R(root->rchild);
//				L(root);
//			}
//		}
//	}
//}
//
//int main() {
//	int n, v;
//	node* root = NULL;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> v;
//		insert(root, v);
//	}
//
//	printf("%d\n", root->v);
//
//	return 0;
//}