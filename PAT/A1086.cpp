//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <string>
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
//
//int n;
//
//node* create(int preL, int preR, int inL, int inR) {
//	if (preL > preR) {
//		return NULL;
//	}
//
//	node* root = new node;
//	root->data = pre[preL];
//
//	int k;
//	for (k = inL;k <= inR;k++) {
//		if (in[k] == pre[preL]) {
//			break;
//		}
//	}
//
//	int numLeft = k - inL;
//
//	root->lchild = create(preL + 1, preL + numLeft, inL, k - 1);
//	root->rchild = create(preL + numLeft + 1, preR, k + 1, inR);
//
//	return root;
//}
//
//int num = 0;
//
//void postorder(node* root) {
//	if (root == NULL) {
//		return;
//	}
//
//	postorder(root->lchild);
//	postorder(root->rchild);
//	printf("%d", root->data);
//	num++;
//	if (num < n) printf(" ");
//}
//
//int main() {
//	cin >> n;
//	string str;
//	stack<int> s;
//	int x, preIndex = 0, inIndex = 0;
//	for (int i = 0;i < 2 * n;i++) {
//		cin >> str;
//		if (str == "Push") {
//			cin >> x;
//			pre[preIndex++] = x;
//			s.push(x);
//		}
//		else {
//			in[inIndex++] = s.top();
//			s.pop();
//		}
//	}
//	node* root = create(0, n - 1, 0, n - 1);
//	postorder(root);
//
//	return 0;
//}