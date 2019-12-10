//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int maxv = 10010;
//const int INF = 1000000000;
//
//int G[maxv][maxv];
//
//int N, M, K, L;
//
//void isVecCov(vector<int> v) {
//	for (int i = 0;i < v.size() -1;i++) {
//		for (int j = i + 1;j < v.size();j++) {
//			if (G[v[i]][v[j]] == INF) {
//				printf("No\n");
//				return;
//			}
//		}
//	}
//	printf("Yes\n");
//	return;
//}
//int main() {
//	cin >> N >> M;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 0;i < M;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = G[v][u] = 1;
//	}
//
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		cin >> L;
//		vector<int> v;
//		for (int j = 0;j < L;j++) {
//			int temp;
//			cin >> temp;
//			v.push_back(temp);
//		}
//
//		isVecCov(v);
//	}
//
//	return 0;
//}