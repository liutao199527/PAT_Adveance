//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100010;
//
//struct Node {
//	int address;
//	int data;
//	int next;
//	int order;
//}node[maxn];
//
//bool isExist[maxn] = { false };
//bool cmp(Node a, Node b) {
//	return a.order < b.order;
//}
//
//int main() {
//	for (int i = 0;i < maxn;i++) {
//		node[i].order = 2 * maxn;
//	}
//
//	int n, begin;
//	cin >> begin >> n;
//	int address, data, next;
//	for (int i = 0;i < n;i++) {
//		cin >> address >> data >> next;
//		node[address].address = address;
//		node[address].data = data;
//		node[address].next = next;
//	}
//
//	//未删除的有效节点个数和已删除有效节点的个数
//	int countVaild = 0, countRemoved = 0, p = begin;
//	while (p != -1) { //枚举链表
//		if (!isExist[abs(node[p].data)]) {
//			isExist[abs(node[p].data)] = true;
//			node[p].order = countVaild++;
//		}
//		else {
//			 //data 的绝对值存在
//			node[p].order = maxn + countRemoved++; //被删除，编号从maxn开始
//		}
//
//		p = node[p].next;
//
//	}
//
//	sort(node, node + maxn, cmp);
//
//	int count = countVaild + countRemoved;
//	for (int i = 0;i < count;i++) {
//		if (i != countVaild - 1 && i != count - 1) {
//			//非最后一个节点
//			printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
//		}
//		else {
//			//最后一个节点单独处理
//			printf("%05d %d -1\n", node[i].address, node[i].data);
//		}
//	}
//
//	return 0;
//}