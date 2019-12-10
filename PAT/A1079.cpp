//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <cstdio>
//
//using namespace std;
//
//const int maxn = 100010;
//
//struct node {
//	double data; //数据域(货物量)
//	vector<int> child; //指针域
//}Node[maxn];
//
//int n;//结点个数
//
//double p, r, ans = 0; //p为价格，r为增加率，ans为叶结点货物的价格之和
//
//void DFS(int index, int depth) {
//	if (Node[index].child.size() == 0) { //到达叶子结点
//		ans += Node[index].data * pow(1 + r, depth); //累加叶子结点货物的价格
//		return;
//	}
//
//	for (int i = 0;i < Node[index].child.size();i++) {
//		DFS(Node[index].child[i], depth + 1);
//	}
//}
//
//int main() {
//	int k, child;
//	cin >> n >> p >> r;
//	r /= 100;
//
//	for (int i = 0;i < n;i++) {
//		cin >> k;
//		if (k == 0) {
//			cin >> Node[i].data;
//		}
//		else {
//			for (int j = 0;j < k;j++) {
//				cin >> child;
//				Node[i].child.push_back(child);
//			}
//		}
//	}
//
//	DFS(0, 0);
//	printf("%.1f\n", p * ans);
//	return 0;
//
//}
//
//
