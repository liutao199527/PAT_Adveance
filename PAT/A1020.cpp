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
//int n; //�ڵ����
//
////��ǰ�������ĺ�������Ϊ[postL,postR],��������Ϊ[inL,inR]
////create�������ع����Ķ������ĸ���ַ
//
//node* create(int postL, int postR, int inL, int inR) {
//	if (postL > postR) {
//		return NULL; //�ݹ�ı߽�����
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
//int num = 0;//�������ʲôʱ������ո�
//
//void BFS(node* root) {
//	queue<node*> q; //���д�ŵ�ʱ��ַ
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