//#include<iostream>
//#include <algorithm>
//#include<map>
//
//using namespace std;
//const int maxn = 10010;
//
//struct node {
//	int data;
//	int order;
//	int num;
//	node() {
//		num = 0;
//	}
//}Node[maxn];
//
//bool cmp(node a,node b){
//	return a.num > b.num;
//}
//int N;
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		int temp;
//		cin >> temp;
//		Node[temp].data = temp;
//		Node[temp].order = i;
//		Node[temp].num++;
//	}
//
//	sort(Node, Node + maxn, cmp);
//	int ans = 0, mino = maxn;
//	bool flag = false;
//	for (int i = N-1;i>=0;i--) {
//		if (Node[i].num == 1 && Node[i].order < mino) {
//			ans = Node[i].data;
//			mino = Node[i].order;
//			flag = true;
//		}
//	}
//	if (flag) {
//		printf("%d", ans);
//	}
//	else {
//		printf("None");
//	}
//
//	return 0;
//}