//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 100010;
//
//struct Node{
//	int num;
//	int pos;
//}node[maxv];
//
//bool cmp(Node a, Node b) {
//	return a.num < b.num;
//}
//int N;
//vector<int> ans;
//int raw[maxv];
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> node[i].num;
//		node[i].pos = i;
//		raw[i] = node[i].num;
//	}
//
//	sort(node, node + N, cmp);
//	int max = -1;
//	for (int i = 0;i < N;i++) {
//		if (node[i].pos == i && raw[i] > max) {
//			ans.push_back(node[i].num);
//		}
//		if (raw[i] > max) {
//			max = raw[i];
//		}
//	}
//	printf("%d\n", ans.size());
//	for (int i = 0;i < ans.size();i++) {
//		printf("%d", ans[i]);
//		if (i != ans.size() - 1) {
//			printf(" ");
//		}
//	}
//	return 0;
//}