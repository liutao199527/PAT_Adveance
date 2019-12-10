//#include <iostream>
//#include <vector>
//
//using namespace std;
//const int INF = 1000000000;
//const int maxv = 510;
//
//int G[maxv][maxv];
//int costs[maxv][maxv];
//bool vis[maxv];
//int d[maxv];
//int c[maxv];
//int N, M, S, D;
//vector<int> pre[maxv];
//
//int optValue = INF;
//vector<int> path, tempPath;
//
//void Dijkstra(int S) {
//	fill(vis, vis + maxv, false);
//	fill(d, d + maxv, INF);
//	fill(c, c + maxv, INF);
//	d[S] = 0;
//	c[S] = 0;
//	for (int i = 0;i < N;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j < N;j++) {
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < N;v++) {
//			if(vis[v] == false && G[u][v] != INF){
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					pre[v].clear();
//					pre[v].push_back(u);
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					pre[v].push_back(u);
//				}
//			}
//		}
//	}
//}
//
//void DFS(int v) {
//	if (v == S) {
//		tempPath.push_back(v);
//		int value = 0;
//		for (int i = tempPath.size() - 1;i > 0;i--) {
//			int id = tempPath[i];int nextid = tempPath[i - 1];
//			value += costs[id][nextid];
//		}
//		if (value < optValue) {
//			optValue = value;
//			path = tempPath;
//		}
//		tempPath.pop_back();
//		return;
//	}
//
//	tempPath.push_back(v);
//	for (int i = 0;i < pre[v].size();i++) {
//		DFS(pre[v][i]);
//	}
//	tempPath.pop_back();
//}
//int main() {
//	cin >> N >> M >> S >> D;
//	fill(G[0], G[0] + maxv * maxv,INF);
//	for (int i = 0;i < M;i++) {
//		int city1, city2, dis, cost;
//		cin >> city1 >> city2 >> dis >> cost;
//		G[city1][city2] = G[city2][city1] = dis;
//		costs[city1][city2] = costs[city2][city1] = cost;
//	}
//
////	Dijkstra(S);
//	DFS(D);
//	for (int i = path.size() - 1;i >= 0;i--) {
//		printf("%d ", path[i]);
//	}
//	printf("%d ", d[D]);
//	printf("%d", optValue);
//
//	return 0;
//}
//
