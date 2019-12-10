//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//struct node {
//	int v, height;//v为节点权值，height为当前子树的高度
//	node* lchild;
//	node* rchild;
//};
//
////生成一个新节点，v为节点权值
//node* newNode(int v) {
//	node* Node = new node;
//	Node->v = v;
//	Node->height = 1;
//	Node->lchild = Node->rchild = NULL;
//	return Node;
//}
//
////获取以root为根节点的子树的当前height
//int getHeight(node* root) {
//	if (root == NULL) return 0;
//	return root->height;
//}
//
////更新节点root的height
//void updataHeight(node* root) {
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
//}
//
////计算平衡因子
//int getBalanceFactor(node* root) {
//	return getHeight(root->lchild) - getHeight(root->rchild);
//}
//
////左旋(left Rotation)
//void L(node*& root) {
//	node* temp = root->rchild;
//	root->rchild = temp->lchild;
//	temp->lchild = root;
//	updataHeight(root);
//	updataHeight(temp);
//	root = temp;
//}
//
////右旋(right Rotation)
//void R(node*& root) {
//	node* temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	updataHeight(root);
//	updataHeight(temp);
//	root = temp;
//}
//
////插入权值为v的节点
//void insert(node*& root, int v) {
//	if (root == NULL) {
//		//到达空节点
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