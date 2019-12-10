//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 510;
//const int INF = 1000000000;
//
////n为顶点数，m为边数，st,ed分别为起点和终点
////G为邻接矩阵，weight为点权
////d[]记录最短距离，w[]记录最大点权之和，num[]记录最短路径的数目
//int n, m, st, ed, G[maxv][maxv], weight[maxv];
//int d[maxv], w[maxv], num[maxv];
//bool vis[maxv] = { false };
//
//void Dijkstra(int s) {
//	fill(d, d + maxv, INF);
//	memset(num, 0, sizeof(num));
//	memset(w, 0, sizeof(w));
//	d[s] = 0;
//	w[s] = weight[s];
//	num[s] = 1;
//
//	for (int i = 0;i < n;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j < n;j++) {
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//
//		if (u == -1)return;
//		vis[u] = true;
//		for (int v = 0;v < n;v++) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					w[v] = w[u] + weight[v];
//					num[v] = num[u];
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					if (w[u] + weight[v] > w[v]) {
//						w[v] = w[u] + weight[v];
//					}
//
//					num[v] += num[u];
//				}
//			}
//		}
//	}
//
//}
//
//int main() {
//	cin >> n >> m >> st >> ed;
//	for (int i = 0;i < n;i++) {
//		cin >> weight[i];  //读入点权
//	}
//	int u, v;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 0;i < m;i++) {
//		cin >> u >> v;
//		cin >> G[u][v];
//		G[v][u] = G[u][v];
//	}
//
//	Dijkstra(st);
//	printf("%d %d\n", num[ed], w[ed]);
//	return 0;
//}
//
//
