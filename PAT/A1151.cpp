//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int maxv = 10010;
//
//int M, N;
//int pre[maxv], in[maxv];
//bool flag;
//
//
//struct Node {
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//
//vector<int> v;
//vector<int> temp1;
//vector<int> temp2;
//int n;
//
//Node* Create(int preL, int preR, int inL, int inR) {
//	if (preL > preR) {
//		return NULL; //µÝ¹é±ß½ç
//	}
//
//	Node* root = new Node;
//
//	root->data = pre[preL];
//	int k;
//	for (k = inL;k <= inR;k++) {
//		if (in[k] == pre[preL]) {
//			break;
//		}
//	}
//
//	int numLeft = k - inL;
//
//	root->lchild = Create(preL + 1, preL + numLeft, inL, k - 1);
//	root->rchild = Create(preL + numLeft + 1, preR, k + 1, inR);
//
//	return root;
//}
//
//void search(Node* root, int x) {
//	if (root == NULL) {
//		return;
//	}
//	if (root->data == x) {
//		flag = true;
//		if (n == 1) {
//			temp1 = v;
//		}
//		else {
//			temp2 = v;
//		}
//		return;
//	}
//	else {
//		v.push_back(root->data);
//		search(root->lchild, x);
//		search(root->rchild, x);
//		v.pop_back();
//	}
//}
//
//void init() {
//	flag = false;
//	if (!v.empty()) {
//		v.clear();
//	}
//}
//
//void showResult(int num1,int num2) {
//	int i = temp1.size()-1;
//	int j = temp2.size()-1;
//	while (i !=0 || j != 0){
//		if (temp1[i] == temp2[j]) {
//			printf("LCA of %d and %d is %d.\n", num1, num2, temp1[i]);
//			break;
//		}
//		if (temp1[i] == num2) {
//			printf("%d is an ancestor of %d.\n", num2, num1);
//			break;
//		}
//		if (temp2[j] == num1) {
//			printf("%d is an ancestor of %d.\n", num1, num2);
//			break;
//		}
//		if (i > j) {
//			i--;
//		}
//		else if (i = j) {
//			i--;
//			j--;
//		}
//		else {
//			j--;
//		}
//	}
//
//
//}
//int main() {
//	cin >> M >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> in[i];
//	}
//	for (int i = 0;i < N;i++) {
//		cin >> pre[i];
//	}
//
//	Node* root = Create(0,N-1,0,N-1);
//	for (int i = 0;i < M;i++) {
//		temp1.clear();temp2.clear();
//		int num1,num2 ;
//		bool flag1, flag2;
//		cin >> num1>> num2;
//		init();
//		n = 1;
//		search(root, num1);
//		flag1 = flag;
//		init();
//		n = 2;
//		search(root, num2);
//		flag2 = flag;
//		if (flag1 && flag2) {
//			showResult(num1, num2);
//		}
//		else if (flag1 == false && flag2 == true) {
//			printf("ERROR: %d is not found.\n", num1);
//		}
//		else if (flag2 == false && flag1 == true) {
//			printf("ERROR: %d is not found.\n", num2);
//		}
//		else {
//			printf("ERROR: %d and %d are not found.\n", num1, num2);
//		}
//
//	}
//}