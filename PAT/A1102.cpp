//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 110;
//
//struct node { // ��������̬д��
//	int data;
//	int lchild;
//	int rchild;
//}Node[maxn];
//
//bool notRoot[maxn] = { false }; //��¼�Ƿ��Ǹ��ڵ㣬��ʼ���Ǹ��ڵ�
//int n, num;//nΪ�ڵ������numΪ��ǰ�Ѿ�����Ľڵ����
//
////�������
//void inorder(int root) {
//	if (root == -1) { //�ݹ�߽�
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
////�������
//void BFS(int root) {
//	queue<int> q; //ע����������ǵ�ַ
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
////������������Է�ת������
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
////��������ַ�ת��Ϊ-1���߽����
//int strToNum(char c) {
//	if (c == '-') return -1;
//	else {
//		notRoot[c - '0'] = true; //���c���Ǹ��ڵ�
//		return c - '0'; //���ؽ����
//	}
//}
//
////Ѱ�Ҹ��ڵ���
//int findRoot() {
//	for (int i = 0;i < n;i++) {
//		if (notRoot[i] == false) {
//			return i; //�Ǹ���㣬����i
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
//	int root = findRoot(); //��ø������
//	postOrder(root);//��ת������
//	BFS(root);
//	num = 0;
//	inorder(root);
//	return 0;
//}
//