//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int maxn = 100010;
//struct node {
//	char data;
//	int next;
//	bool flag;
//}Node[maxn];
//
//int main() {
//
//	for (int i = 0;i < maxn;i++) {
//		Node[i].flag = false;
//	}
//
//	int s1, s2, n;
//	cin >> s1 >> s2 >> n; //s1 和s2分别代表两条链表的首地址
//	int address, next; //节点地址和后继节点地址
//	char data;
//	for (int i = 0;i < n;i++) {
//		cin >> address >> data >> next;
//		Node[address].data = data;
//		Node[address].next = next;
//	}
//
//	int p;
//	for (p = s1;p != -1;p = Node[p].next) {
//		Node[p].flag = true; //枚举第一条链表的所有节点，并令其出现次数为1
//	}
//	for (p = s2; p != -1;p = Node[p].next) {
//		//找到第一个已经在第一条链表中出现的节点
//		if (Node[p].flag == true) break;
//	}
//
//	if (p != -1) {
//		printf("%05d\n",p);
//	}
//	else {
//		printf("-1\n");
//	}
//
//	return 0;
//}
//
//
