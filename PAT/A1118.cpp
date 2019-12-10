//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//const int maxv = 100010;
//
//int father[maxv];
//int N;
//set<int> s;
//set<int> sf;
//
//void init() {
//	for (int i = 1;i < maxv;i++) {
//		father[i] = i;
//	}
//}
//
//int findFather(int v) {
//	if (v == father[v]) return v; //找到根节点
//	else {
//		int F = findFather(father[v]);
//		//father[v] = F;
//		return F;
//	}
//}
//
//void Union(int a, int b) {
//	int faA = findFather(a);
//	int faB = findFather(b);
//	if (faA != faB) {
//		father[faA] = faB;
//	}
//}
//
//int main() {
//	cin >> N;
//	init();
//	for (int i = 0;i < N;i++) {
//		int k;
//		int temp1,temp;
//		cin >> k;
//		for (int j = 0;j < k;j++) {
//			cin >> temp1;
//			if (j == 0) {
//				temp = temp1;
//			}
//			s.insert(temp1);
//			Union(temp, temp1);
//		}
//	}
//
//	for (set<int>::iterator it = s.begin();it != s.end();it++) {
//		sf.insert(findFather(*it));
//	}
//	int Q;
//	cin >> Q;
//	printf("%d %d\n", sf.size(), s.size());
//	for (int i = 0;i < Q;i++) {
//		int q1, q2;
//		cin >> q1 >> q2;
//		if (findFather(q1) == findFather(q2)) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//}