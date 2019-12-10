//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int maxv = 100000;
//
//struct Node {
//	int address;
//	int data;
//	int next;
//	int level;
//	int index;
//}node[maxv];
//
//int N, st, K;
//
//void init() {
//	for (int i = 0;i < maxv;i++) {
//		node[i].level = 4;
//	}
//}
//
//bool cmp(Node a,Node b) {
//	if (a.level != b.level)
//		return a.level < b.level;
//	else return a.index < b.index;
//}
//int main() {
//	cin >> st >> N >> K;
//	init();
//	for (int i = 0;i < N;i++) {
//		int now, data, next;
//		cin >> now >> data >> next;
//		node[now].address = now;
//		node[now].data = data;
//		node[now].next = next;
//	}
//	int p = st, index = 1,count = 0;
//
//	while (p != -1) {
//		node[p].index = index++;
//		count++;
//		if (node[p].data < 0) {
//			node[p].level = 1;
//		}
//		else if (node[p].data >= 0 && node[p].data <= K) {
//			node[p].level = 2;
//		}
//		else {
//			node[p].level = 3;
//		}
//		p = node[p].next;
//	}
//	sort(node, node + maxv, cmp);
//	for (int i = 0;i < N;i++) {
//		if (i < N - 1) {
//			printf("%05d %d %05d\n", node[i].address,node[i].data, node[i + 1].address);
//		}
//		else {
//			printf("%05d %d -1\n", node[i].address,node[i].data);
//		}
//	}
//
//	return 0;
//}