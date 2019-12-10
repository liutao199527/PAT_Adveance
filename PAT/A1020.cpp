//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 50;
//struct node {
//	int data;
//	node* lchild;
//	node* rchild;
//};
//
//int pre[maxn], in[maxn], post[maxn];
//int n; //节点个数
//
////当前二叉树的后序区间为[postL,postR],中序区间为[inL,inR]
////create函数返回构建的二叉树的跟地址
//
//node* create(int postL, int postR, int inL, int inR) {
//	if (postL > postR) {
//		return NULL; //递归的边界条件
//	}
//
//	node* root = new node;
//	root->data = post[postR];
//
//	int k;
//
//	for (k = inL;k <= inR;k++) {
//		if (in[k] == post[postR]) {
//			break;
//		}
//	}
//
//	int numLeft = k - inL;
//
//	root->lchild = create(postL, postL + numLeft - 1, inL, k - 1);
//	root->rchild = create(postL + numLeft, postR - 1, k + 1, inR);
//
//	return root;
//}
//
//int num = 0;//用来标记什么时候输出空格
//
//void BFS(node* root) {
//	queue<node*> q; //对列存放的时地址
//	q.push(root);
//	while (!q.empty()) {
//		node* top = q.front();
//		q.pop();
//		printf("%d", top->data);
//		num++;
//		if (num < n) printf(" ");
//		if (top->lchild != NULL) q.push(top->lchild);
//		if (top->rchild != NULL) q.push(top->rchild);
//	}
//}
//
//
//int main() {
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> post[i];
//	}
//
//	for (int i = 0;i < n;i++) {
//		cin >> in[i];
//	}
//
//	node* root = create(0, n - 1, 0, n - 1);
//	BFS(root);
//	return 0;
//}