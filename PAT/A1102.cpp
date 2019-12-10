//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 110;
//
//struct node { // 二叉树静态写法
//	int data;
//	int lchild;
//	int rchild;
//}Node[maxn];
//
//bool notRoot[maxn] = { false }; //记录是否不是根节点，初始均是根节点
//int n, num;//n为节点个数，num为当前已经输出的节点个数
//
////中序遍历
//void inorder(int root) {
//	if (root == -1) { //递归边界
//		return;
//	}
//
//	inorder(Node[root].lchild);
//	printf("%d", root);
//	num++;
//	if (num < n) printf(" ");
//	else printf("\n");
//	inorder(Node[root].rchild);
//}
//
////层序遍历
//void BFS(int root) {
//	queue<int> q; //注意队列里存的是地址
//	q.push(root);
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//		printf("%d", now);
//		num++;
//		if (num < n)printf(" ");
//		else printf("\n");
//		if (Node[now].lchild != -1) q.push(Node[now].lchild);
//		if (Node[now].rchild != -1) q.push(Node[now].rchild);
//	}
//}
//
////后序遍历，用以反转二叉树
//void postOrder(int root) {
//	if (root == -1) {
//		return;
//	}
//
//	postOrder(Node[root].lchild);
//	postOrder(Node[root].rchild);
//	swap(Node[root].lchild, Node[root].rchild);
//}
//
////将输入的字符转换为-1或者结点编号
//int strToNum(char c) {
//	if (c == '-') return -1;
//	else {
//		notRoot[c - '0'] = true; //标记c不是根节点
//		return c - '0'; //返回结点编号
//	}
//}
//
////寻找根节点编号
//int findRoot() {
//	for (int i = 0;i < n;i++) {
//		if (notRoot[i] == false) {
//			return i; //是跟结点，返回i
//		}
//	}
//}
//
//int main() {
//	char lchild, rchild;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> lchild >> rchild;
//		Node[i].lchild = strToNum(lchild);
//		Node[i].rchild = strToNum(rchild);
//	}
//
//	int root = findRoot(); //获得根结点编号
//	postOrder(root);//反转二叉树
//	BFS(root);
//	num = 0;
//	inorder(root);
//	return 0;
//}
//
