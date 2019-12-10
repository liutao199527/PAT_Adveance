//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//const int maxv = 10010;
//const int INF = 1000000000;
//
//int G[maxv][maxv];
//vector<int> q;
//int vis[maxv];
//int weight[maxv];
//int N, M;//顶点数目，边数
//set<int> s;
//
//bool DFS(int u) {
//	vis[u] = true;
//	for (int i = 0;i < N;i++) {
//		if (G[u][i] != INF) {
//			if (weight[u] == weight[i]) {
//				return false;
//			}
//			G[u][i] = G[i][u] = INF;
//			DFS(i);
//		}
//	}
//
//	return true;
//}
//
//bool DFSTrave() {
//	for (int i = 0;i < N;i++) {
//		if (vis[i] == false) {
//			if (!DFS(i)) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void init() {
//	for (int i = 0;i < M;i++) {
//		int u = q[2*i];
//		int v = q[2 * i + 1];
//		G[u][v] = G[v][u] = 1;
//	}
//}
//int main() {
//	fill(G[0], G[0] + maxv * maxv, INF);
//	cin >> N >> M;
//	for (int i = 0;i < M;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = G[v][u] = 1;
//		q.push_back(u);
//		q.push_back(v);
//	}
//	int K;
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		init();
//		fill(vis, vis + maxv, false);
//		for (int j = 0;j < N;j++) {
//			cin >> weight[j];
//		}
//		if (DFSTrave()) {
//			for (int k = 0;k < N;k++) {
//				s.insert(weight[k]);
//			}
//			printf("%d-coloring\n", s.size());
//			s.clear();
//		}
//		else {
//			printf("No\n");
//		}
//	}
//	return 0;
//}