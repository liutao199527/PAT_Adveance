//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100010;
//
//struct Node {
//	int address, data, next;
//	int order; //这个order等下会帮助我们在数组中保持链表的顺序
//}node[maxn];
//
//bool cmp(Node a, Node b) {
//	return a.order < b.order;
//}
//
//int main() {
//	for (int i = 0;i < maxn;i++) {
//		node[i].order = maxn;
//	}
//
//	int begin, n, k, address, data, next;//起始地址，节点个数，步长
//	cin >> begin >> n >> k;
//	for (int i = 0;i < n;i++) {
//		cin >> address >> data >> next;
//		node[address].address = address;
//		node[address].data = data;
//		node[address].next = next;
//	}
//
//	int p = begin, count =0;
//	while (p != -1) {
//		node[p].order = count++;
//		p = node[p].next;
//	}
//
//	sort(node, node + maxn, cmp);
//	//有效节点为前count个节点，为了下面书写方便，因此把count赋值给n
//	n = count;
//	//printf("%d", n);
//	//单链表已经形成
//	for (int i = 0;i < n / k;i++) { //枚举完整的n/k
//		for (int j = (i + 1) * k - 1;j > i* k;j--) {//第i块倒着输出，但没有处理这一块的最后一个节点
//			printf("%05d %d %05d\n", node[j].address, node[j].data, node[j - 1].address);
//		}
//
//		//下面时每一块的最后一个节点的next的处理
//		printf("%05d %d ", node[i * k].address, node[i * k].data);
//		if (i < n / k - 1) { //如果不是最后一块，就指向下一块的最后一个节点
//			printf("%05d\n", node[(i + 2) * k - 1].address);
//		}
//		else {
//			if (n % k == 0) {
//				//恰好时最后一个节点
//				printf("-1\n");
//			}
//			else {
//				printf("%05d\n", node[(i + 1) * k].address);
//				for (int i = n / k * k;i < n;i++) {
//					printf("%05d %d ", node[i].address, node[i].data);
//					if (i < n - 1) {
//						printf("%05d\n", node[i + 1].address);
//					}
//					else {
//						printf("-1\n");
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}