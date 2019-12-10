//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//const int maxn = 100010;
//
//vector<int> node[maxn]; //用于存放树
//
//int n;
//double p, r;//结点个数，价格,增加率 这里需要注意double类型和int类型不要弄错了
//
//int minDepth = maxn, num = 0;//num用于记录价格最低的商家树
//
//void DFS(int root, int depth) {
//	if ( node[root].size() == 0) { //到达叶子结点
//		if (depth < minDepth) {
//			minDepth = depth;
//			num = 1;
//		}
//		else if(depth == minDepth){
//			num++;
//		}
//
//	}
//
//	for (int i = 0;i < node[root].size();i++) {
//		DFS(node[root][i], depth + 1);
//	}
//}
//
//int main() {
//	int k, child;
//	cin >> n >> p >> r;
//	r /= 100;
//	for (int i = 0;i < n;i++) {
//		cin >> k;
//		if (k != 0) {
//			for (int j = 0;j < k;j++) {
//				cin >> child;
//				node[i].push_back(child);
//			}
//		}
//	}
//	DFS(0, 0);
//	printf("%.4f %d", p * pow(1 + r, minDepth), num);
//
//	return 0;
//}