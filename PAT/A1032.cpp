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
//	cin >> s1 >> s2 >> n; //s1 ��s2�ֱ���������������׵�ַ
//	int address, next; //�ڵ��ַ�ͺ�̽ڵ��ַ
//	char data;
//	for (int i = 0;i < n;i++) {
//		cin >> address >> data >> next;
//		Node[address].data = data;
//		Node[address].next = next;
//	}
//
//	int p;
//	for (p = s1;p != -1;p = Node[p].next) {
//		Node[p].flag = true; //ö�ٵ�һ�����������нڵ㣬��������ִ���Ϊ1
//	}
//	for (p = s2; p != -1;p = Node[p].next) {
//		//�ҵ���һ���Ѿ��ڵ�һ�������г��ֵĽڵ�
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