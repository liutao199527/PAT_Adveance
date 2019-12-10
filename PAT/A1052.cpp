//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxn = 100005;
//
//struct Node { //定义静态链表
//	int address, data, next;
//	bool flag; //用于判断节点是否在链表上
//}node[maxn];
//
//bool cmp(Node a,Node b) {
//	if (a.flag == false || b.flag == false) {
//		return a.flag > b.flag; //只要a和b中有一个无效节点，就将它放到后面去
//	}
//	else {
//		return a.data < b.data;
//	}
//}
//
//int main() {
//	for (int i = 0;i < maxn;i++) {
//		node[i].flag = false;
//	}
//
//	int n, begin, address, data, next;
//	cin >> n >> begin;
//	for (int i = 0;i < n;i++) {
//		cin >> address >> data >> next;
//		node[address].address = address;
//		node[address].data = data;
//		node[address].next = next;
//	}
//
//	int count = 0, p = begin;
//	//枚举链表，对flag进行标记，同时计数有效节点个数
//	while (p != -1) {
//		node[p].flag = true;
//		count++;
//		p = node[p].next;
//	}
//	
//	if (count == 0) { //特判，新链表中没有节点时输出 0 -1
//		printf("0 -1");
//	}
//	else {
//		//筛选有效节点，并按data从小到大排序
//		sort(node, node + maxn, cmp);
//		//输出结果
//		//防止-1被%05d化，提前判断
//		printf("%d %05d\n", count, node[0].address);
//		for (int i = 0;i < count;i++) {
//			if (i != count - 1) {
//				//因为这里我们只是改变数组中的顺序，并没有改变原始节点next指针的指向，所以这里在输出下一节点时需要node[i+1].address
//				printf("%05d %d %05d\n", node[i].address, node[i].data, node[i+1].address);
//			}
//			else {
//				printf("%05d %d -1\n", node[i].address, node[i].data);
//			}
//		}
//	}
//
//	return 0;
//}