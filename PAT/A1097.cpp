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
//	//δɾ������Ч�ڵ��������ɾ����Ч�ڵ�ĸ���
//	int countVaild = 0, countRemoved = 0, p = begin;
//	while (p != -1) { //ö������
//		if (!isExist[abs(node[p].data)]) {
//			isExist[abs(node[p].data)] = true;
//			node[p].order = countVaild++;
//		}
//		else {
//			 //data �ľ���ֵ����
//			node[p].order = maxn + countRemoved++; //��ɾ������Ŵ�maxn��ʼ
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
//			//�����һ���ڵ�
//			printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
//		}
//		else {
//			//���һ���ڵ㵥������
//			printf("%05d %d -1\n", node[i].address, node[i].data);
//		}
//	}
//
//	return 0;
//}