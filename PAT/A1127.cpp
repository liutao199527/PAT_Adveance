//#include <iostream>
//#include <queue>
//#include <stack>
//#include <vector>
//
//using namespace std;
//const int maxv = 40;
//
//struct Node {
//	int data;
//	Node* lchild;
//	Node* rchild;
//}node[maxv];
//
//int N;
//int post[maxv], in[maxv];
//int num = 0;
//
//Node* Create(int postL, int postR, int inL, int inR) {
//	if (postL > postR) {
//		return NULL;
//	}
//
//	Node* root = new Node;
//	root->data = post[postR];
//	int k;
//	for (k = inL;k <= inR;k++) {
//		if (in[k] == post[postR]) {
//			break;
//		}
//	}
//
//	int numLeft = k - inL;
//
//	root->lchild = Create(postL, postL + numLeft - 1, inL, k - 1);
//	root->rchild = Create(postL + numLeft, postR -1,k + 1, inR);
//
//	return root;
//}
//
//
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> in[i];
//	}
//	for (int i = 0;i < N;i++) {
//		cin >> post[i];
//	}
//
//	Node* root = Create(0, N - 1, 0, N - 1);
//	layerOrder(root);
//
//	return 0;
//}
//
