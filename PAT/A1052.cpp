//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxn = 100005;
//
//struct Node { //���徲̬����
//	int address, data, next;
//	bool flag; //�����жϽڵ��Ƿ���������
//}node[maxn];
//
//bool cmp(Node a,Node b) {
//	if (a.flag == false || b.flag == false) {
//		return a.flag > b.flag; //ֻҪa��b����һ����Ч�ڵ㣬�ͽ����ŵ�����ȥ
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
//	//ö����������flag���б�ǣ�ͬʱ������Ч�ڵ����
//	while (p != -1) {
//		node[p].flag = true;
//		count++;
//		p = node[p].next;
//	}
//	
//	if (count == 0) { //���У���������û�нڵ�ʱ��� 0 -1
//		printf("0 -1");
//	}
//	else {
//		//ɸѡ��Ч�ڵ㣬����data��С��������
//		sort(node, node + maxn, cmp);
//		//������
//		//��ֹ-1��%05d������ǰ�ж�
//		printf("%d %05d\n", count, node[0].address);
//		for (int i = 0;i < count;i++) {
//			if (i != count - 1) {
//				//��Ϊ��������ֻ�Ǹı������е�˳�򣬲�û�иı�ԭʼ�ڵ�nextָ���ָ�����������������һ�ڵ�ʱ��Ҫnode[i+1].address
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