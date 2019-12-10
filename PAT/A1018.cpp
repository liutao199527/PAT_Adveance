//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int maxv = 510;
//const int INF = 1000000000;
//
//int G[maxv][maxv];
//int vis[maxv] = { false };
//int d[maxv];
//int weight[maxv];
//int w[maxv];
//int pre[maxv]; //用来记录路径中每个顶点的前一个顶点
//int C, N, S, M; //最大容量，顶点数，问题顶点，边数
//
//void DFS(int s) {
//	fill(d, d + maxv, INF);
//	fill(w, w + maxv, 0);
//	weight[s] = 0;
//	d[s] = 0;
//	for (int i = 0;i <= N;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j <= N;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v <= N;v++) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					w[v] = weight[v] - C / 2 + w[u];
//					pre[v] = u;
//				}
//				else if (d[u] + G[u][v] == d[v] && abs(weight[v] - C / 2 + w[u]) < abs(w[v])) {
//					w[v] = weight[v] - C / 2 + w[u];
//					pre[v] = u;
//				}
//			}
//		}
//	}
//}
//
//void DFS_pre(int s, int v) {
//	if (v == s) {
//		printf("%d", s);
//		return;
//	}
//
//	DFS_pre(s, pre[v]);
//	printf("->");
//	printf("%d", v);
//}
//
//int main() {
//	cin >> C >> N >> S >> M;
//	for (int i = 1;i <= N;i++) {
//		cin >> weight[i];
//	}
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 0;i < M;i++) {
//		int u, v, dis;
//		cin >> u >> v >> dis;
//		G[u][v] = dis;
//		G[v][u] = dis;
//	}
//	DFS(0);
//	if (w[S] < 0) printf("%d", abs(w[S]));
//	else printf("0");
//	printf(" ");
//	DFS_pre(0, S);
//	printf(" ");
//	if (w[S] > 0) printf("%d", w[S]);
//	else printf("0");
//
//	return 0;
//}