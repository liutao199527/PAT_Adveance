//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100010;
//
//struct Node {
//	int address, data, next;
//	int order; //���order���»���������������б���������˳��
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
//	int begin, n, k, address, data, next;//��ʼ��ַ���ڵ����������
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
//	//��Ч�ڵ�Ϊǰcount���ڵ㣬Ϊ��������д���㣬��˰�count��ֵ��n
//	n = count;
//	//printf("%d", n);
//	//�������Ѿ��γ�
//	for (int i = 0;i < n / k;i++) { //ö��������n/k
//		for (int j = (i + 1) * k - 1;j > i* k;j--) {//��i�鵹���������û�д�����һ������һ���ڵ�
//			printf("%05d %d %05d\n", node[j].address, node[j].data, node[j - 1].address);
//		}
//
//		//����ʱÿһ������һ���ڵ��next�Ĵ���
//		printf("%05d %d ", node[i * k].address, node[i * k].data);
//		if (i < n / k - 1) { //����������һ�飬��ָ����һ������һ���ڵ�
//			printf("%05d\n", node[(i + 2) * k - 1].address);
//		}
//		else {
//			if (n % k == 0) {
//				//ǡ��ʱ���һ���ڵ�
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