//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//const int maxn = 100010;
//
//vector<int> node[maxn]; //���ڴ����
//
//int n;
//double p, r;//���������۸�,������ ������Ҫע��double���ͺ�int���Ͳ�ҪŪ����
//
//int minDepth = maxn, num = 0;//num���ڼ�¼�۸���͵��̼���
//
//void DFS(int root, int depth) {
//	if ( node[root].size() == 0) { //����Ҷ�ӽ��
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